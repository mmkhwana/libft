/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 09:32:19 by event             #+#    #+#             */
/*   Updated: 2019/06/28 11:34:55 by mmkhwana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_bzero(void *str1, size_t n)
{
	char	*reset;
	size_t	i;

	reset = str1;
	i = 0;
	if (n == 0)
		return (0);
	while (n != 0)
	{
		reset[i] = 0;
		i++;
		n--;
	}
	return (str1);
}
