/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:40:29 by dshatilo          #+#    #+#             */
/*   Updated: 2023/10/26 10:56:10 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int ch )
{
	int	islow;
	int	iscap;

	islow = (ch >= 'a' && ch <= 'z');
	iscap = (ch >= 'A' && ch <= 'Z');
	if (!(islow || iscap))
		return (0);
	return (ch);
}
