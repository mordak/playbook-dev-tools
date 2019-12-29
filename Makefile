build:
	docker run -t -v "${PWD}":/root/berrymuch yamsergey/bb10-ndk:0.2 /bin/bash -c 'cd /root/berrymuch; ./build.sh -b /root/bbndk -t build'