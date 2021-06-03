/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isa-viei <isa-viei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 02:02:00 by isa-viei          #+#    #+#             */
/*   Updated: 2021/06/02 23:00:12 by isa-viei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>

size_t	ft_strlen(const char *s);
int		ft_tolower(int ch);
int		ft_upper(int ch);
int		ft_isprint(int arg);
int		ft_isascii(int arg);

#endif
