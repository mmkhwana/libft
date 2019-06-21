/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmkhwana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 17:43:01 by mmkhwana          #+#    #+#             */
/*   Updated: 2019/06/11 09:30:28 by mmkhwana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *str1, char const *str2, size_t n)
{
	if (str1 && str2)
	{
		while (*str1 == *str2 && n > 0)
		{
			if (*str1 == 0)
			{
				return (1);
			}
			str1++;
			str2++;
			n--;
		}
		if (n == 0 || (*str1 == 0 && *str2 == 0))
		{
			return (1);
		}
		return (0);
	}
	return (0);
}
