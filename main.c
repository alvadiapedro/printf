#include "ft_printf.h"

int     main(void)
{
char a = 'a';
char *b = "a b c ola valete";

int c = 0;
int d = -12345;
int e = 654321;
int	f = -2147483648;
int g = 2147483647;

unsigned int h = 12345678;
unsigned int i = 4294967295;
unsigned int j = 0;

        ft_printf("a=%c\nb=%s\nc=%d\nd=%i\ne=%d\nf=%i\ng=%d\nh=%u\ni=%u\nj=%u\n", a, b, c, d, e, f, g, h, i, j);
return (0);
}
