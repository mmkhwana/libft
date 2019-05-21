/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmkhwana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 09:41:41 by mmkhwana          #+#    #+#             */
/*   Updated: 2019/05/21 10:22:27 by mmkhwana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t		ft_strlen(const char *str)
{
	const char *origstr;

	origstr = str;
	while (*str != '\0')
		str++;
	return (str - origstr);
}
