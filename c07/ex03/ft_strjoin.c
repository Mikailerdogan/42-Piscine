/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mierdoga <mierdoga@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 16:49:54 by mierdoga          #+#    #+#             */
/*   Updated: 2022/03/02 16:55:27 by mierdoga         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*s;
	int		boyut;
	int		i;
	int		c;

	s = malloc(sizeof(strs));
	boyut = 0;
	c = 0;
	while (boyut < size)
	{
		i = 0;
		while (strs[boyut][i] != '\0')
		{
			s[c++] = strs[boyut][i++];
		}
		i = 0;
		while (sep[i] != '\0' && boyut != size - 1)
		{
			s[c++] = sep[i++];
		}
		boyut++;
	}
	s[c] = '\0';
	return (s);
}
