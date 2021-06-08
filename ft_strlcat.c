/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isa-viei <isa-viei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 16:30:22 by isa-viei          #+#    #+#             */
/*   Updated: 2021/06/08 03:33:36 by isa-viei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	dest_size;
	size_t	src_size;
	size_t	src_i;

	dest_size = ft_strlen(dest);
	src_size = ft_strlen(src);
	i = dest_size;
	src_i = 0;
	while (*(src + src_i))
	{
		*(dest + i) = *(src + src_i);
		i++;
		src_i++;
		if (i == size - 1)
			break ;
	}
	*(dest + i) = '\0';
	return (dest_size + src_size);
}
