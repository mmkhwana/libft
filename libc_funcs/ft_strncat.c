/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmkhwana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 10:43:16 by mmkhwana          #+#    #+#             */
/*   Updated: 2019/05/23 11:20:31 by mmkhwana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *restrict str1, const char *restrict str2, int n)
{
	int		i;
	int		j;

	i = 0;
	while (str1[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (str2[j] != '\0' && j < n)
	{
		str1[i] = str2[j];
		i++;
		++j;
	}
	str1[i] = '\0';
	return (str1);
}
