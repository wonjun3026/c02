/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjo <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 18:11:15 by wjo               #+#    #+#             */
/*   Updated: 2021/10/24 12:57:00 by wjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb);

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	k;

	i = 0;
	k = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[k] != '\0' && k < nb - 1)
	{
		dest[i] = src[k];
		i++;
		k++;
	}
	dest[i] = '\0';
	if (k < nb)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
