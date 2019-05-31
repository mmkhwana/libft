/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmkhwana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 15:01:47 by mmkhwana          #+#    #+#             */
/*   Updated: 2019/05/31 16:24:01 by mmkhwana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char *dst;
	unsigned char *str;
	int 			i;

	dst = (unsigned char*)str1;
	str = (unsigned char*)str2;
	i = 0;
	if (n == 0)
		return (0);
		while (dst[i] == str[i] && n-- > 0)
	{
		i++;
		if (n == 0)
			return (0);
	}
	if (dst[i] != str[i])
	{
		return (dst[i] - str[i]);
	}
	return (0);
}
