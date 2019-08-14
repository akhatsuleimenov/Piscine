NAME = ft_cat.c
SRCS = functions/ft_strlen.c
FILE = ft_cat
LIBRARY = libft.a


all: make

make: 	
	gcc -c $(NAME) $(SRCS)
	ar rc $(LIBRARY) *.o
	ranlib $(LIBRARY)
	gcc -o $(FILE) $(NAME) -L. -lft

clean:
	/bin/rm -f *.o
	/bin/rm -f a.out

fclean: clean
	/bin/rm -f $(LIBRARY)
	/bin/rm -f $(FILE)
