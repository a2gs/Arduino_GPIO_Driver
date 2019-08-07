# Andre Augusto Giannotti Scota
# https://sites.google.com/view/a2gs/
#
# MIT License
#

#!/bin/bash

if [ $# -ne 1 ]; then

	echo -e "Usage:\n$0 /dev/aruinoPort"

else

	while read CMD_TO_SEND
	do
		echo "$CMD_TO_SEND" > "$1"
	done

fi
