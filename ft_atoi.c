/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isa-viei <isa-viei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 23:32:58 by isa-viei          #+#    #+#             */
/*   Updated: 2021/06/03 02:36:13 by isa-viei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	if (c == '\t'
		|| c == '\v'
		|| c == '\r'
		|| c == '\n'
		|| c == '\f'
		|| c == ' ')
		return (1);
	return (0);
}

int	ft_atoi (const char *nptr)
{
	int	res;
	int	sign;

	res = 0;
	sign = 1;
	while (ft_isspace(*nptr))
		nptr++;
	if ((*nptr == '+') || (*nptr == '-'))
	{
		if (*nptr == '-')
			sign = -1;
		nptr++;
	}
	while (ft_isdigit(*nptr))
	{
		res = (res * 10) + (*nptr++ - '0');
	}
	return (res * sign);
}
