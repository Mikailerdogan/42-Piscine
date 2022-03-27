/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mierdoga <mierdoga@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 11:16:09 by mierdoga          #+#    #+#             */
/*   Updated: 2022/02/20 11:29:17 by mierdoga         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				fark;

	i = 0;
	fark = 0;
	while ((i < n) && !fark && (s1[i] != '\0') && (s2[i] != '\0'))
	{
		fark = (unsigned char)s1[i] - (unsigned char)s2[i];
		i++;
	}
	if (i < n && !fark && (s1[i] == '\0' || s2[i] == '\0'))
		fark = (unsigned char)s1[i] - (unsigned char)s2[i];
	return (fark);
}
