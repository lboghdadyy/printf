/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaghdad <sbaghdad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 15:47:16 by sbaghdad          #+#    #+#             */
/*   Updated: 2024/11/16 17:30:44 by sbaghdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putadr(unsigned long nbr, int *count)
{
	char	*hexa;

	hexa = "0123456789abcdef";
	if (nbr >= 16)
		ft_putadr(nbr / 16, count);
	*count += ft_putchar(hexa[nbr % 16]);
}
