#* ************************************************************************** *#
#*                                                                            *#
#*                            \\             #`#``                            *#
#*                            ~\o o_       0 0\                               *#
#*                            # \__)      (u  ); _  _                         *#
#*                     # \# \#  #           \  \# \# \                        *#
#*                    #(   . . )            (         )\                      *#
#*                   #  \_____#              \_______#  \                     *#
#*                       []  []               [[] [[]    *.                   *#
#*                       []] []]              [[] [[]                         *#
#*                                                                            *#
#* ****************************************************************** .py *** *#

comp	:=	c++ -Wall -Werror -Wextra -std=c++98
name	:=	out
rmv	:=	rm -rf

incl	:=	-I./incs/


src	:=	HumanA.cpp \
		HumanB.cpp \
		Weapon.cpp

#src	=	$(addprefix incs/, $(src))
path	:=	src/
src	:=	$(foreach cpp, $(src), $(path)$(cpp))
src	+=	main.c

bud	:=	$(src:.cpp=.o)

bud_dir	:
		@mkdir $@

%.o	:	%.cpp
		@ echo "compiling [$^] "
		@ $(comp) -c $^ -o $@

$(name)	:	$(bud)
		@ echo "compiling [$^] "
		@ $(comp) $^ -o $@
		@ printf "\n\t"
		@ printf "\"hey, are you using the right compiler? \"\n\n"

run	:	re
		@ ./out
		@ make clean

all	:	$(name)

clean	:
		@ $(rmv) $(bud)

fclean	:	clean
		@ $(rmv) $(name) a.out

f	:	fclean
re	:	f all
test	:	run

.PHONY	:	fclean clean all re f

