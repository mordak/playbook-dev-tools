build:
	docker run -t -v "${PWD}":/berrymuch -u $(shell id -u):$(shell id -g) yamsergey/bb10-ndk:0.5.3 /bin/bash -c 'cd /berrymuch; ./build.sh -b /root/bbndk -t build'

shell: .additions
	docker run -it -v "${PWD}":/berrymuch -u $(shell id -u):$(shell id -g) yamsergey/bb10-ndk:0.5.3 /bin/bash

.additions:
	-@docker rm /yamsergey/bb10-ndk:0.5.1 /yam_additions /yam_groupadd /yam_add1 /yam_add2 2> /dev/null
	docker run -it --name yam_groupadd -v "${PWD}":/root/berrymuch yamsergey/bb10-ndk:0.5 /usr/sbin/groupadd kalou --gid $(shell id -g)
	docker commit yam_groupadd yamsergey/bb10-ndk:0.5.1
	docker run -it --name yam_add1 yamsergey/bb10-ndk:0.5.1 /usr/sbin/useradd -M $(shell whoami) --uid $(shell id -u) --gid $(shell id -g) -d /berrymuch
	docker commit yam_add1 yamsergey/bb10-ndk:0.5.2
	docker run -it --name yam_add2 yamsergey/bb10-ndk:0.5.2 bash -c "apt-get update ; apt-get -yq install vim lua5.2"
	docker commit yam_add2 yamsergey/bb10-ndk:0.5.3

	touch .additions
