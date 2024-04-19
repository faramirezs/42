#include <stdio.h>

int ft_iterative_factorial(int nb) {
	int i;
	int c;
	i = 1;
	c = 1;
	while (i < nb ){
		c = c * (i + 1);
		i++;
	}
	printf("%d factorial is %d\n", nb, c);
	return c;
}

int main(void) {
	int a;
	a = 4;
	ft_iterative_factorial(a);
	return 0;
}
