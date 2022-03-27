/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mierdoga <mierdoga@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 18:39:39 by mierdoga          #+#    #+#             */
/*   Updated: 2022/02/28 18:43:18 by mierdoga         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	c;
	int	i;

	c = 1;
	i = 0;
	if (argc > 1)
	{
		while (c < argc)
		{
			i = 0;
			while (argv[c][i] != '\0')
			{
				write (1, &argv[c][i], 1);
				i++;
			}
			write (1, "\n", 1);
			c++;
		}
	}
}
