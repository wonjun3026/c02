/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjo <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 12:57:44 by wjo               #+#    #+#             */
/*   Updated: 2021/10/24 12:58:06 by wjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*st1;
	char	*find1;

	while (*str)
	{
		if (*str == *to_find)
		{
			st1 = str + 1;
			find1 = to_find + 1;
			if (*st1 && *find1 && *st1 == *find1)
			{
				st1++;
				find1++;
			}
			if (!(*find1))
				return (str);
			if (!(*st1))
				break ;
		}
		str++;
	}
	return (0);
}
