#include <unistd.h>

void	ft_putchar(char c) {
	write(1, &c, 1);
}

void ft_print_alphabet(void){
	int i;
	i = 65;

	while(i <= 90){
		ft_putchar(i);
		i++;
	}
}

int main () {
	ft_print_alphabet();
	return 0;
}
