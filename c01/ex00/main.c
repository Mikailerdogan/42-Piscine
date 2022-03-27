/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mierdoga <mierdoga@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 18:25:36 by mierdoga          #+#    #+#             */
/*   Updated: 2022/02/15 18:32:28 by mierdoga         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int		main(void)
{
	int a;

	a = 1;
	printf("before: %d\n", a);
	ft_ft(&a);
	printf("after : %d\n", a);
}
