#include <unistd.h>
void ft_putchar(char c)
{
    write(1,&c,1);
}
void show_bits(unsigned char byte)
{
    int i = 8;
    while(i > 0)
    {
        i--;
        ft_putchar(((byte >> i)& 1) + '0');
    }
}
