/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mierdoga <mierdoga@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 18:43:49 by mierdoga          #+#    #+#             */
/*   Updated: 2022/02/28 18:47:16 by mierdoga         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	c;
	int	i;

	c = argc - 1;
	i = 0;
	if (argc > 1)
	{
		while (c > 0)
		{
			i = 0;
			while (argv[c][i] != '\0')
			{
				write (1, &argv[c][i], 1);
				i++;
			}
			write (1, "\n", 1);
			c--;
		}
	}
	return (0);
}
