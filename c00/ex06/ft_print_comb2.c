/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgas-gar <pgas-gar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 17:10:31 by pgas-gar          #+#    #+#             */
/*   Updated: 2022/04/01 12:09:50 by pgas-gar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char n)
{
	write(1, &n, 1);
}

/* Muestra en orden creciente todas combinaciones 
posibles de dos números entre 0 y 99.*/

void	ft_print_comb2(void)
{
	char	par1;
	char	par2;

	par1 = 0;
	while (par1 <= 98)
	{
		par2 = par1 + 1;
		while (par2 <= 99)
		{
			ft_putchar(par1 / 10 + '0');
			ft_putchar(par1 % 10 + '0');
			ft_putchar(' ');
			ft_putchar(par2 / 10 + '0');
			ft_putchar(par2 % 10 + '0');
			if (par1 != 98)
				write(1, ", ", 2);
			par2++;
		}
		par1++;
	}
}

int		main(void)
{
	ft_print_comb2();
	return(0);
}