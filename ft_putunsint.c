#include "ft_printf.h"

int	ft_putunsint(unsigned int n)
{
	int	len;
	int	x;

	len = 0;
	if (n == 0)
		len += ft_putchar('0');
	else
		while (n % 10 != 0)
		{
			
		}
}
//meter o numero todo numa str mas fica ao contrario. Fazer um strrev e escrever a str com o putchar
//experimentar fazer typecast de n para str* e ver o que é que isso imprime 
