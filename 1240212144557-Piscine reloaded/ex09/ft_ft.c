#include <stdio.h>

void ft_ft(int *nbr){
	*nbr = 42;
}

int main (void) {
	int ptr;
	ptr = 10;
	printf("Before: %d\n", ptr);
	ft_ft(&ptr);
	printf("After: %d\n", ptr);
}
