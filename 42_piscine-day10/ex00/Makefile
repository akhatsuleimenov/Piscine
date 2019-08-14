NAME = libft.a
SRCS = functions/*.c

all: make

make: 
	gcc -c $(SRCS)
	ar rc $(NAME) *.o
	ranlib $(NAME)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all