/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darakely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 20:46:50 by darakely          #+#    #+#             */
/*   Updated: 2022/03/17 22:27:37 by darakely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char		*dest2;
	unsigned const char	*src2;
	size_t				i;

	dest2 = dest;
	src2 = src;
	if (!dest && !src)
		return (0);
	if (dest2 > src2)
	{
		while (len--)
			dest2[len] = src2[len];
	}
	if (dest2 < src2)
	{
		i = 0;
		while (i < len)
		{
			dest2[i] = src2[i];
			i++;
		}
	}
	return (dest);
}
