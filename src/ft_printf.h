/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schamizo <schamizo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 13:25:51 by schamizo          #+#    #+#             */
/*   Updated: 2024/01/04 20:14:23 by schamizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdlib.h>
# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int	ft_printf(const char *str, ...);
int	ft_print_nbr(int n);
int	ft_print_str(char *str);
int	ft_print_char(int c);
int	ft_print_ptr(unsigned long int n);
int	ft_print_ptrhex(unsigned long int n);
int	ft_print_unsig(unsigned int n);
int	ft_print_hex(unsigned int n);
int	ft_print_hexup(unsigned int n);

#endif