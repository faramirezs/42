#include <unistd.h>

int main(int agc, char **arv)
{
	int i;

	i = 0;
	if(agc == 2)
	{
		while ((arv[1][i] == 32) || (arv[1][i] == 9)) //Skip the spaces or tabs
			i++;
		while (arv[1][i] && (arv[1][i] != 32) && (arv[1][i] != 9))
		{
			write(1, &arv[1][i], 1);
			i++;
		}
	}
	write(1,"\n",1);
}
