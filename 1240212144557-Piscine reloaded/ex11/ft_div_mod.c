#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod){
	*div = a / b;
	printf("Div\n %d\n", *div);
	*mod = a % b;
	printf("Mod\n %d\n", *mod);
}

//This function divides parameters a by b and stores the result in the int pointed by
//div. It also stores the remainder of the division of a by b in the int pointed by mod.

int main (void) {
	int a;
	int b;
	int c;
	int d;
	a = 5;
	b = 2;
	ft_div_mod(a, b, &c, &d);
}
