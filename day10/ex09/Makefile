NAME = do-op.c
LIBRARY = libft.a
SRCS = srcs/*.c
HEADER = includes
FUNCTIONS = functions/*.c

all: make

make: 
	gcc -I $(HEADER) -c $(SRCS) $(FUNCTIONS)
	ar rc $(LIBRARY) *.o
	ranlib $(LIBRARY)
	gcc -Wall -Wextra -Werror -o ft_advanced_do-op ft_advanced_do-op.c -L. -lft

clean:
	/bin/rm -f *.o
	/bin/rm -f $(LIBRARY)
	
re: fclean all