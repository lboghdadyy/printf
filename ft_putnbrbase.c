/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrbase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaghdad <sbaghdad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 12:10:07 by sbaghdad          #+#    #+#             */
/*   Updated: 2024/11/16 17:31:46 by sbaghdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbrbase(long long nbr, char *base, int *count)
{
	long	len;

	len = ft_strlen(base);
	if (nbr < 0)
	{
		*count += ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr >= len)
		ft_putnbrbase(nbr / len, base, count);
	*count += ft_putchar(base[nbr % len]);
}
