/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schamizo <schamizo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 15:18:16 by schamizo          #+#    #+#             */
/*   Updated: 2023/12/13 19:35:13 by schamizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_ptr(unsigned long int n)
{
	int	cont;

	cont = 0;
	cont += ft_print_str("0x");
	cont += ft_print_ptrhex(n);
	return (cont);
}
