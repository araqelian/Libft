/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darakely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 21:15:52 by darakely          #+#    #+#             */
/*   Updated: 2022/03/16 02:43:56 by darakely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *arr, int c, size_t n)
{
	const char	*arr2;
	size_t		i;

	arr2 = arr;
	i = 0;
	while (i < n)
	{
		if (arr2[i] == (char)c)
			return ((void *)&arr2[i]);
		i++;
	}
	return (NULL);
}
