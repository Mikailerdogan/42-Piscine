/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mierdoga <mierdoga@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 18:41:26 by mierdoga          #+#    #+#             */
/*   Updated: 2022/02/15 18:52:40 by mierdoga         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str [i] != '\0')
	{
		write(1, (str + i), 1);
		i++;
	}
}
void	ft_putstr(char *str);

int	main(void)
{
	char	str[] = "asde";
	ft_putstr(str);
}
