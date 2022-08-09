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
#* ****************************************************************** nuo *** *#

name		:=	phonebook
comp		:=	c++ -std=c++98 -Wall -Werror -Wextra
src		:=	main.cpp contact.cpp console.cpp phonebook.cpp
rmv		:=	rm -f

bud		:=	$(src:.cpp=.o)

all		:	$(name)

%.o		:	%.cpp
			@ echo compiling [$@]
			@ $(comp) -c $^


#$(name)		:	$(src)
#		@ $(comp) $^ -o $@

$(name)		:	$(bud)
			@ echo compiling [$@]
			@ $(comp) -o $@ $^
			@ printf "\n- \n\n"

clean		:
			$(rmv) $(name)

fclean		:	clean
			$(rmv) $(bud) out *.out

f		:	fclean

re		:	f all

.PHONY		:	fclean clean all re f
