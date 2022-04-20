/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darakely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 00:15:52 by darakely          #+#    #+#             */
/*   Updated: 2022/03/16 02:51:07 by darakely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	num;

	if (n < 0)
	{
		ft_putchar_fd ('-', fd);
		num = -n;
	}
	else
	{
		num = n;
	}
	if (num >= 10)
		ft_putnbr_fd (num / 10, fd);
	ft_putchar_fd ((num % 10) + '0', fd);
}
