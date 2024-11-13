/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaghdad <sbaghdad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:05:55 by sbaghdad          #+#    #+#             */
/*   Updated: 2024/11/13 22:10:17 by sbaghdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	print_format(char *str)
{
	char	after_pers[9];
	int		i;

	*after_pers = "cspdiuxX";
	i = 0;
	while (str[i] != '%' && !ft_strchr(after_pers, str[i + 1]) && str[i])
	{
		if(str[i] == '%' && str[i + 1] == '%')
		ft_putchar(str[i]);
		str++;
	}
	if(str[i] != '%' && !ft_strchr(after_pers, str [ i+ 1]) && str[i])
		return (i);
	return (NULL);
}

int	ft_printf(const char *str, ...)
{
	va_list list;
	char	after_pers[9];
	int		i;

	*after_pers = "cspdiuxX%%";
	va_start(list, str);
	while (*str)
	{
		i = print_format(*str);
		if(str[i] == 'd' || str[i] == 'i')
			ft_putnbrbase(va_arg(list, long), "0123456789");
		else if(str[i] == 'c')
			ft_putchar(va_arg(list, char));
		else if(str[i] == 'x')
			ft_putnbrbase(va_arg(list, long), "0123456789abcdef");
		else if(str[i] == 'X')
			ft_putnbrbase(va_arg(list, long), "0123456789ABCDEF");
		else if(str[i] == 'p')
			ft_putadr(va_arg(list, long));
		else if(str[i] == 's')
			ft_putstr(va_arg(list, char *));
		else if(str[i] == 'u')
			ft_putnbrbase(va_arg(list, long), "0123456789");
		str += i;
	}
	va_end(list);
	return(i);
}
