/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isa-viei <isa-viei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 03:16:55 by isa-viei          #+#    #+#             */
/*   Updated: 2021/06/06 00:35:12 by isa-viei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	s2_size;

	s2_size = ft_strlen(s2);
	if (!(s2_size))
		return ((char *)s1);
	while (s2_size <= len)
	{
		if (!ft_strncmp(s1, s2, s2_size))
			return ((char *)s1);
		len--;
		s1++;
	}
	return (NULL);
}
