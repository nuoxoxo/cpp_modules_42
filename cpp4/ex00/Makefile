comp		:=	c++ -Wall -Werror -Wextra -std=c++98
name		:=	out
rmv		:=	rm -rf

src		:=	main.cpp \
			Animal.cpp \
			Dog.cpp \
			Cat.cpp \
			_Cpp04_.cpp \
			WrongAnimal.cpp \
			WrongCat.cpp

budfolder	:=	./bud/
budpath		:=	$(budfolder)
bud		:=	$(addprefix $(budfolder), $(src:.cpp=.o))

all		:	$(name)

$(budpath)	:
			@ mkdir -p $(budpath)


$(budfolder)%.o	:	%.cpp
			@ echo "compiling [$^] "
			@ $(comp) -c $< -o $@

$(name)	:	$(budpath) $(bud)
		@ echo "compiling [$@]"
		@ $(comp) $(bud) -o $@
		@ printf "\n\t"
		@ printf "\"are you using the right compiler? \"\n\n"
		@ echo "you can do [make f] "
		@ echo "you can do [make run] "
		@ echo ""
		@ echo "--------------------- "
		@ echo ""

run	:	re
		@ ./out
		@ make clean

r	:	run
t	:	r

clean	:
		@ $(rmv) $(budfolder)

fclean	:	clean
		@ $(rmv) $(name) a.out *.o


test	:	run
f	:	fclean
re	:	f all

.PHONY	:	fclean clean all re f
