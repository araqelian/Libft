/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darakely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 23:07:04 by darakely          #+#    #+#             */
/*   Updated: 2022/03/21 07:12:21 by darakely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	size_t			len2;
	size_t			len3;
	unsigned int	i;

	if (!s)
		return (NULL);
	len2 = ft_strlen(s);
	len3 = ft_strlen(s + start);
	if (len3 < len)
		len = len3;
	str = malloc(len + 1);
	i = 0;
	while (i < len && start + i < (unsigned int)len2)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
