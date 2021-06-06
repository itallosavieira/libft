/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isa-viei <isa-viei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 15:14:29 by isa-viei          #+#    #+#             */
/*   Updated: 2021/06/06 20:40:59 by isa-viei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*destu;
	unsigned char	*srcu;

	destu = (unsigned char *)dest;
	srcu = (unsigned char *)src;
	while (n--)
	{
		*destu = *srcu;
		if (*srcu == (unsigned char)c)
			return (dest + 1);
		destu++;
		srcu++;
	}
	return (NULL);
}
