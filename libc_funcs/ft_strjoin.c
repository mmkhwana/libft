/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmkhwana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 07:57:37 by mmkhwana          #+#    #+#             */
/*   Updated: 2019/06/12 10:24:07 by mmkhwana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *str1, char const *str2)
{
	int		i;
	int		j;
	char	*str;
	size_t	x;
	size_t	y;

	i = -1;
	j = 0;
	if (!str1 || !str2)
		return (NULL);
	x = ft_strlen(str1);
	y = ft_strlen(str2);
	if (!(str = (char *)malloc(sizeof(char) * (x + y + 1))))
		return (NULL);
	while (str1[++i] != '\0')
	{
		str[i] = str1[i];
	}
	while (str2[j] != '\0')
	{
		str[i + j] = str2[j];
		j++;
	}
	str[i + j] = '\0';
	return (str);
}
