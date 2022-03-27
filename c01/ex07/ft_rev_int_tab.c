/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mierdoga <mierdoga@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 15:05:53 by mierdoga          #+#    #+#             */
/*   Updated: 2022/02/15 15:08:11 by mierdoga         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		temp = tab [i];
		tab [i] = tab [size - 1];
		tab [size - 1] = temp;
		i++;
		size--;
	}
}
