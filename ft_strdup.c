/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darakely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 02:14:28 by darakely          #+#    #+#             */
/*   Updated: 2022/03/16 02:37:57 by darakely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	int		len;

	if (!s1)
		return (0);
	len = ft_strlen(s1);
	str = (char *)malloc(len + 1);
	ft_strlcpy(str, s1, len + 1);
	return (str);
}
