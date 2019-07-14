#include <unistd.h>

int ft_putchar(char c)
{
	write(1, &c, 1);
}

int	rush(int x, int y)
{
	int array[x][y];
	int counter;
	int counter2;

	counter = x;
	counter2 = y;
	array[0][0] = 47;
	array[x-1][0] = 92;
	array[0][y-1] = 92;
	array[x-1][y-1] = 47;
	while (x > 1)
	{
		array[x - 2][0] = 42;
		array[x - 2][y - 1] = 42;
		x--;
	}
	x = counter;
	while (y > 1)
	{
		array[0][y - 2] = 42;
		array[x - 1][y - 2]= 42;
		y--;
	}
	y = counter2;

	counter = 0;
	counter2 = 0;
	while (counter < x)
	{
		counter2 = 0;
		while (counter2 < y)
		{	
			write(1, &array[counter][counter2], 1);
			counter2++;
		}
		write(1, "\n", 1);
		counter++;
	}
}

int main()
{
	rush(5, 3);
}
