/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmkhwana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 10:43:16 by mmkhwana          #+#    #+#             */
/*   Updated: 2019/06/30 16:10:44 by mmkhwana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *str1, const char *str2, size_t n)
{
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	while (str1[i] != '\0')
		i++;
	while (str2[j] != '\0' && j < n)
	{
		str1[i] = str2[j];
		i++;
		++j;
	}
	str1[i] = '\0';
	return (str1);
}
