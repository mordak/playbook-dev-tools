build:
	docker run -t -v "${PWD}":/berrymuch -u $(shell id -u):$(shell id -g) yamsergey/bb10-ndk:0.6.1 /bin/bash -c 'cd /berrymuch; ./build.sh -b /root/bbndk -t build'

shell:
	docker run -it -v "${PWD}":/berrymuch -u $(shell id -u):$(shell id -g) yamsergey/bb10-ndk:0.6.2 /bin/bash

docker-image: bb10-ndk-092
	docker build --build-arg UID=$(shell id -u) --build-arg GID=$(shell id -g) --build-arg WHOAMI=$(shell whoami) -f Dockerfile.karawitan -t yamsergey/bb10-ndk:0.9.2 .

bb10-ndk-092:
	docker build -f Dockerfile -t yamsergey/bb10-ndk:0.9.2 .
