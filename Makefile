GIT_DOCKERFILES=ssh://git@mis.kalou.net/src/Dockerfiles
MY_IMG_BASE=berrymuch
MY_IMG_VER=0.4

all: docker-ubuntu-debootstrap-16.04-i386

#
# BUILD Docker Image
#

docker-ubuntu-debootstrap-16.04-i386: ~/Dockerfiles
	(cd ~/Dockerfiles/docker-ubuntu-debootstrap; ARCH=i386 DOCKER_PREFIX=berrymuch ./build.sh 16.04)

~/Dockerfiles:
	(cd ~/ ; git clone $(GIT_DOCKERFILES))

#
# RUN Docker Container
#

shell: .additions
	docker run -it -v /src/bbndk:/bbndk -v /src/berrymuch:/berrymuch -u $(shell id -u):$(shell id -g) $(MY_IMG_BASE):$(MY_IMG_VER) /bin/bash


.additions:
	-docker rm /add1 /add2 /add3
	docker run -it --name add1 $(MY_IMG_BASE):0.1 /usr/sbin/groupadd kalou --gid $(shell id -g)
	docker commit add1 $(MY_IMG_BASE):0.2
	docker run -it --name add2 $(MY_IMG_BASE):0.2 /usr/sbin/useradd -M $(shell whoami) --uid $(shell id -u) --gid $(shell id -g) -d /berrymuch
	docker commit add2 $(MY_IMG_BASE):0.3
	docker run -it --name add3 $(MY_IMG_BASE):0.3 bash -c "apt-get update ; apt-get -yq install vim lua5.2 libc6-dev zlib1g-dev zlib1g zlib1g-dbg zip pkg-config"
	docker commit add3 $(MY_IMG_BASE):$(MY_IMG_VER)

	touch .additions

build:
	docker run -t -v "${PWD}":/berrymuch -u $(shell id -u):$(shell id -g) $(MY_BASE_IMAGE):$(MY_IMG_VER) /bin/bash -c 'cd /berrymuch; ./build.sh -b /root/bbndk -t build'
