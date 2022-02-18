#include "ft_printf.h"

int	main(void)
{
    char a = 'a';
    char *s = "test";
    ft_printf("this is %c %s!\n", a, s);
    return (0);
}
