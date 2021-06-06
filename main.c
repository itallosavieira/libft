/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isa-viei <isa-viei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 22:17:22 by isa-viei          #+#    #+#             */
/*   Updated: 2021/06/06 19:24:56 by isa-viei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main ()
{
	char dest[50] = "itallo";
	char dest2[50] = "itallo";
	char src[50] = "   -";
	printf("before: %s\n", dest);
	ft_memcpy(dest, src, 6);
	printf("after: %s\n", dest);
	memcpy(dest2, src, 6);
	printf("after: %s\n", dest2);
	return (0);
}
