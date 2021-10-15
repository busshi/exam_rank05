#!/bin/bash


true="Richard: This looks like another boring day.$
Richard: I am Richard, Hello, I'm Richard the Warlock!!$
Inconspicuous Red-brick Wall has been turned into a critter!$
Inconspicuous Red-brick Wall has been burnt to a crisp!$
Richard: My job here is done!$"

bin=ex02

clang++ -Wall -Wextra -Werror -std=c++98 main.cpp Warlock.cpp ASpell.cpp ATarget.cpp Fwoosh.cpp Dummy.cpp Fireball.cpp Polymorph.cpp Brickwall.cpp Spellbook.cpp TargetGenerator.cpp -o ${bin}

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
