#include <stdio.h>

int ft_sqrt(int nb) {
	int i;
	i = 1;
	while (nb > 0 && i <= nb/2)
	{
		if (nb % (i ^ 2) == 0)
		{
			printf("La raiz de %d es %d\n", nb, i);
			return i;
		}
		else
			i++;
	}
printf("%d es irracional\n", nb);
return 0;
}

int main (void) {
	int nc;
	nc = 4;
	ft_sqrt(nc);
}
