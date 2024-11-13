/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaghdad <sbaghdad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 16:12:00 by sbaghdad          #+#    #+#             */
/*   Updated: 2024/11/13 21:36:34 by sbaghdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

void	ft_putnbrbase(long nbr, char *base);
int		ft_putstr(char *str);
int		ft_putchar(char c);
size_t	ft_strlen(const char *str);
char	*ft_strchr(const char *s, int c);

#endif