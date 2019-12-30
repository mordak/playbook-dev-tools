build:
	docker run -t -v "${PWD}":/root/berrymuch -u "${UID}" yamsergey/bb10-ndk:0.4 /bin/bash -c 'cd /root/berrymuch; ./build.sh -b /root/bbndk -t build'

shell:
	docker run -it -v "${PWD}":/root/berrymuch -u "${UID}" yamsergey/bb10-ndk:0.4 /bin/bash

