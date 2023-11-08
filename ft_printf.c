/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:23:19 by dshatilo          #+#    #+#             */
/*   Updated: 2023/11/08 10:40:59 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	size_t	pos;
	int		len;
	va_list	args;

	va_start(args, str);
	pos = 0;
	len = 0;
	while (str[pos])
	{
		if (str[pos] == '%')
		{
			len += ft_switch((char *)&str[++pos], &args);
			pos++;
			continue ;
		}
		ft_putchar_fd(str[pos++], 1);
		len++;
	}
	return (len);
}
