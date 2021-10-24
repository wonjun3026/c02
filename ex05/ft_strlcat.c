/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjo <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 00:36:30 by wjo               #+#    #+#             */
/*   Updated: 2021/10/24 12:58:34 by wjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	k;

	i = 0;
	k = 0;
	while (dest[i])
		i++;
	while (i < size && k < (size - (i + 1)) && src[k])
	{
		dest[i] = src[k];
		i++;
		k++;
	}
	if (size < i)
	{
		while (*src)
			k++;
		return (k + size);
	}
	dest[i] = '\0';
	i--;
	return (i);
}
