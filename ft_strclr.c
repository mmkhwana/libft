/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmkhwana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 09:06:49 by mmkhwana          #+#    #+#             */
/*   Updated: 2019/06/29 14:58:24 by mmkhwana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_strclr(char *s)
{
	unsigned int	i;

	i = 0;
	if (s)
		while (s[i] != '\0')
		{
			s[i] = '\0';
			i++;
		}
	else
		return ;
}