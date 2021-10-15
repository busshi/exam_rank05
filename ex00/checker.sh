#!/bin/bash

true="Richard: This looks like another boring day.$
Richard: I am Richard, Mistress of Magma!$
Richard - Mistress of Magma$
Jack: This looks like another boring day.$
Jack: I am Jack, the Long!$
Jack: I am Jack, the Mighty!$
Jack: My job here is done!$
Richard: My job here is done!$"

bin=ex00

clang++ -Wall -Wextra -Werror -std=c++98 main.cpp Warlock.cpp -o ${bin}

res=$(./"$bin" | cat -e)


clean()
{
rm -f ${bin}
[ -f Makefile ] && make fclean
}


if [ "${res}" = "${true}" ]; then
	echo -e "[ \033[32mOK\033[0m ]"
	clean
	exit 0
else
	echo -e "[\033[31m KO \033[0m]"
	clean
	exit 1
fi
