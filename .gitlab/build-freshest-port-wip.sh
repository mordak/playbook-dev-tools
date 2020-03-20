#!/bin/bash

PFX=/berrymuch

# find last updated WIP port
PORT_NAME=$(ls -ltr $PFX/ports-wip/ | awk 'END { split($0, a, " "); print a[NF] }')


pushd $PFX/ports-wip/$PORT_NAME
bash -x ./build.sh
