/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsig.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schamizo <schamizo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 18:47:12 by schamizo          #+#    #+#             */
/*   Updated: 2023/12/13 19:36:02 by schamizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsig(unsigned int n)
{
	int		cont;
	char	c;

	cont = 0;
	if (n >= 10)
		cont += ft_print_unsig(n / 10);
	c = '0' + n % 10;
	write(1, &c, 1);
	cont++;
	return (cont);
}
