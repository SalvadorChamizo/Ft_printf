/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexup.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schamizo <schamizo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 18:25:10 by schamizo          #+#    #+#             */
/*   Updated: 2023/12/13 19:03:36 by schamizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hexup(unsigned int n)
{
	int	cont;

	cont = 0;
	if (n >= 16)
	{
		cont += ft_print_hexup(n / 16);
		cont += ft_print_hexup(n % 16);
	}
	else
	{
		if (n < 10)
		{
			ft_print_char('0' + n);
			cont++;
		}
		else if (n >= 10)
		{
			ft_print_char((n - 10) + 'A');
			cont++;
		}
	}
	return (cont);
}
