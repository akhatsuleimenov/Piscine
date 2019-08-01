NAME = main.c
LIBRARY = libft.a
SRCS = srcs/*.c
HEADER = includes

all: make clean

make: 
	gcc -I $(HEADER) -c $(SRCS)
	ar rc $(LIBRARY) *.o
	ranlib $(LIBRARY)
	gcc -Wall -Wextra -Werror -o do-op $(NAME) -L. -lft

clean:
	/bin/rm -f *.o
	/bin/rm -f $(LIBRARY)