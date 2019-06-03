/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmkhwana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 08:46:59 by mmkhwana          #+#    #+#             */
/*   Updated: 2019/06/03 14:00:28 by mmkhwana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memset(void *b, int c, size_t x)
{
	unsigned char		*str1;
	unsigned char		str2;
	size_t				i;

	str1 = (unsigned char*)b;
	str2 = (unsigned char)c;
	i = 0;
	while (str1[i] != '\0' && x-- != 0)
	{
		str1[i] = str2;
		i++;
	}
	return (b);
}
