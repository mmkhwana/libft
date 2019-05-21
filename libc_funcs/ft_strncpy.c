/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmkhwana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 15:00:58 by mmkhwana          #+#    #+#             */
/*   Updated: 2019/05/21 15:41:00 by mmkhwana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *strd, const char *strs, int n)
{
	char *s2;

	if (strd == '\0' || strs == '\0')
		return (NULL);
	s2 = strd;
	while (*strs != '\0' && n > 0)
	{
		*strd++ = *strs++;
		n--;
	}
	while (n > 0)
	{
		*strd++ = '\0';
		n--;
	}
	return (s2);
}
