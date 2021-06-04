/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isa-viei <isa-viei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 02:02:00 by isa-viei          #+#    #+#             */
/*   Updated: 2021/06/04 02:11:09 by isa-viei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>

int 	ft_atoi(const char *nptr);
int		ft_isalnum(int arg);
int		ft_isalpha(int arg);
int		ft_isascii(int arg);
int		ft_isdigit(int arg);
int		ft_isprint(int arg);
size_t	ft_strlen(const char *s);
int	ft_strncmp(const char *s1, const char *s2, size_t num);
int		ft_tolower(int ch);
int		ft_upper(int ch);

#endif
