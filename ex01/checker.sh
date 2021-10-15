#!/bin/bash

true="Richard: This looks like another boring day.$
Richard: I am Richard, the Titled!$
Target Practice Dummy has been fwooshed!$
Richard: My job here is done!$"

bin=ex01

clang++ -Wall -Wextra -Werror -std=c++98 main.cpp Warlock.cpp ASpell.cpp ATarget.cpp Fwoosh.cpp Dummy.cpp -o ${bin}

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
	echo "${res}"
	clean
	exit 1
fi
