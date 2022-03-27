/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mierdoga <mierdoga@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 17:11:10 by mierdoga          #+#    #+#             */
/*   Updated: 2022/02/13 14:48:50 by mierdoga         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	while (i < 100)
	{
		k = i + 1;
		while (k < 100)
		{
			ft_putchar(i / 10 + 48);
			ft_putchar(i % 10 + 48);
			ft_putchar(' ');
			ft_putchar(k / 10 + 48);
			ft_putchar(k % 10 + 48);
			if (i != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			k++;
		}
		i++;
	}
}
