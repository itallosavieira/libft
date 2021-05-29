/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isa-viei <isa-viei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 02:17:31 by isa-viei          #+#    #+#             */
/*   Updated: 2021/05/29 02:55:37 by isa-viei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_tolower(int c);

int		main(void)
{
	char	c;
	char	result;
	c = 'I';
	result = ft_tolower(c);

	printf("ft_tolower(%c) = %c\n", c, result);
	
	c = 'i';
	result = ft_tolower(c);

	printf("ft_tolower(%c) = %c\n", c, result);
	
	c = '+';
	result = ft_tolower(c);

	printf("ft_tolower(%c) = %c\n", c, result);
	return (0);
}
