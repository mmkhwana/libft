/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmkhwana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 14:19:09 by mmkhwana          #+#    #+#             */
/*   Updated: 2019/05/21 14:38:39 by mmkhwana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *str1, char *str2)
{
	int i;
	int j;

	i = 0;
	while (str2[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (str1[j])
	{
		str1[j] = str2[j];
		j++;
	}
	return (str1);
}