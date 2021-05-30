/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isa-viei <isa-viei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 02:17:31 by isa-viei          #+#    #+#             */
/*   Updated: 2021/05/29 22:38:36 by isa-viei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int		main(void)
{
	char	a[20]="Strlen";
	char	b[20]={'S','t','r','l','e','n','\0'};
	
	printf("\n### Test: ft_strlen ###\n\n");

	printf("a = \"Strlen\";\n");
	printf("b = {'S','t','r','l','e','n','\\0'};\n\n");

	if (ft_strlen(a) == strlen(a))
	{
		printf("... OK > strlen(a): %zu\n", strlen(a));
		printf("... OK > ft_strlen(a): %zu\n", ft_strlen(a));
	} else {
		printf(".. K.O > strlen(a): %zu\n", strlen(a));
		printf(".. K.O > ft_strlen(a): %zu\n", ft_strlen(a));
	}

	if (ft_strlen(b) == strlen(b))
	{
		printf("... OK > strlen(b): %zu\n", strlen(b));
		printf("... OK > ft_strlen(b): %zu\n", ft_strlen(b));
	} else {
		printf(".. K.O > strlen(a): %zu\n", strlen(b));
		printf(".. K.O > ft_strlen(a): %zu\n", ft_strlen(b));
	}

	return (0);
}
