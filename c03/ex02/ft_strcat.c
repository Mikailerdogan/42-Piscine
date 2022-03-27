/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mierdoga <mierdoga@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 11:30:07 by mierdoga          #+#    #+#             */
/*   Updated: 2022/02/20 11:34:37 by mierdoga         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	c;
	int	d;

	c = 0;
	while (dest[c] != '\0')
		c++;
	d = 0;
	while (src[d] != '\0')
	{
		dest[c + d] = src[d];
		d++;
	}
	dest[c + d] = '\0';
	return (dest);
}
