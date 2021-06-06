/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isa-viei <isa-viei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 15:14:29 by isa-viei          #+#    #+#             */
/*   Updated: 2021/06/06 19:25:11 by isa-viei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*destc;
	char	*srcc;

	destc = (char *)dest;
	srcc = (char *)src;
	if (!n)
		return (destc);
	while (n--)
	{
		*destc++ = *srcc++;
	}
	return (dest);
}
