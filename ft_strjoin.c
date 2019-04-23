/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdalard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 13:55:16 by gdalard           #+#    #+#             */
/*   Updated: 2019/04/15 22:50:00 by gdalard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*d;

	if (!s1 || !s2)
		return (NULL);
	if (!(d = ft_strnew(ft_strlen(s1) + ft_strlen(s2))))
		return (NULL);
	d = ft_strcpy(d, s1);
	d = ft_strcat(d, s2);
	return (d);
}
