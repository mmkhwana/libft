/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmkhwana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 09:25:23 by mmkhwana          #+#    #+#             */
/*   Updated: 2019/06/28 17:43:58 by mmkhwana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dst, const void *str, size_t n)
{
	char		*str1;
	char		*str2;
	size_t		i;

	str1 = (char *)str;
	str2 = (char *)dst;
	i = 0;
	if (str1 < str2)
		while (n--)
		{
			str2[i] = str1[i];
			i++;
		}
	else
		ft_memcpy(str2, str1, n);
	return (dst);
}
