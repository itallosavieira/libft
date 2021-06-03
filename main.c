/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isa-viei <isa-viei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 22:17:22 by isa-viei          #+#    #+#             */
/*   Updated: 2021/06/03 02:36:56 by isa-viei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int main()
{
	char str[] = " +999999123";

	// Functional Code
	int val1 = ft_atoi(str);
	printf("ft: %d \n", val1);

	int val2 = atoi(str);
	printf("or: %d \n", val2);
	return 0;
}
