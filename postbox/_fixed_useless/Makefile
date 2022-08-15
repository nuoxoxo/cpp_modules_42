comp	:=	c++ -Wall -Werror -Wextra -std=c++98
rmv	:=	rm -rf
src	:=	$(wildcard *.cpp)
bud	:=	$(src:.cpp=.o)
name	:=	out

%.o	:	%.cpp
		echo "compiling [$^] "
		$(comp) -c $< -o $@

$(name)	:	$(bud)
		echo "compiling [$@] "
		$(comp) $< -o $@
		./out
		make clean

run	:	re
		./out
		make clean

all	:	$(name)

clean	:
		$(rmv) $(bud)

fclean	:	clean
		$(rmv) $(name) a.out

test	:	run
f	:	fclean
re	:	f all

.PHONY	:	fclean clean all re f

