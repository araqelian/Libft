/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darakely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 01:46:55 by darakely          #+#    #+#             */
/*   Updated: 2022/04/20 01:00:56 by darakely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*str;
	size_t	i;
	size_t	len;

	len = count * size;
	i = 0;
	str = malloc(len);
	if (!str)
		return (0);
	ft_bzero(str, len);
	return (str);
}
