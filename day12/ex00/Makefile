NAME = ft_display_file.c
SRCS = functions/*.c
FILE = ft_display_file
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
