/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaghdad <sbaghdad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 16:00:10 by sbaghdad          #+#    #+#             */
/*   Updated: 2024/11/16 17:30:08 by sbaghdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

void	ft_putnbrbase(long long nbr, char *base, int *count);
int		ft_putstr(char *str);
int		ft_putchar(char c);
size_t	ft_strlen(const char *str);
void	ft_putnbrbaseunsigned(unsigned int nbr, char *base, int	*count);
int		ft_printf(const char *format, ...);
void	ft_putnbr(int nb, int *count);
void	ft_putadr(unsigned long nbr, int *count);

#endif