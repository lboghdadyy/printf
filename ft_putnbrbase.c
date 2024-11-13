
#include "ft_printf.h"

void	ft_putnbrbase(long nbr, char *base)
{
	size_t	len;

	len = ft_strlen(base);
	if(nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	if(nbr > len)
		ft_putnbrbase(nbr / len, base);
	ft_putchar(base[nbr % len]);
}
