#include <stdio.h>

  int ft_recursive_factorial(int nb) {
    if (nb == 1){
    return 1;
    }
    else {
     return nb * ft_recursive_factorial(nb - 1);
    }

  }

  int main(void){
	int nb;
	int r;
	nb = 5;
    r = ft_recursive_factorial(nb);
    printf("%d factorial es %d\n", nb, r);
	return 0;
  }
