/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darakely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 22:26:29 by darakely          #+#    #+#             */
/*   Updated: 2022/03/15 07:50:40 by darakely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	ldst;
	size_t	lsrc;
	int		totall;

	i = 0;
	j = 0;
	ldst = ft_strlen(dst);
	lsrc = ft_strlen(src);
	if (size > ldst)
		totall = ldst + lsrc;
	else
		totall = lsrc + size;
	j = ldst;
	while (src[i] && j + 1 < size)
	{
		dst[j] = src[i];
		j++;
		i++;
	}
	dst[j] = 0;
	return (totall);
}
