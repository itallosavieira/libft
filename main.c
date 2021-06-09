/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isa-viei <isa-viei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 22:17:22 by isa-viei          #+#    #+#             */
/*   Updated: 2021/06/09 14:26:43 by isa-viei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main()
{
    char s1[] = "GeeksForG";
	char s2[] = "";
	int	result = ft_memcmp(s1, s2, 14);
	int	result2 = memcmp(s1, s2, 14);


    printf("%d | %d\n", result, result2);
    return 0;
}
