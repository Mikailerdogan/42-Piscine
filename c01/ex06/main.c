/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mierdoga <mierdoga@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 18:54:41 by mierdoga          #+#    #+#             */
/*   Updated: 2022/02/15 18:54:47 by mierdoga         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlen(char *str);

int		main (void)
{
	char str[] = "Amanda";

	int count = ft_strlen(str);
	
	printf("%d\n", count);
}
