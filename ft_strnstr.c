/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmkhwana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 08:19:39 by mmkhwana          #+#    #+#             */
/*   Updated: 2019/06/12 10:42:16 by mmkhwana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *need, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	if (*need == 0)
		return ((char*)hay);
	while (hay[i] != 0 && i < len)
	{
		j = 0;
		while (hay[i + j] == need[j] && need[j] != 0 && j + i < len)
			j++;
		if (j == ft_strlen(need))
			return ((char*)&hay[i]);
		i++;
	}
	return (NULL);
}
