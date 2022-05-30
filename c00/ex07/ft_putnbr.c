/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgas-gar <pgas-gar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 17:26:07 by pgas-gar          #+#    #+#             */
/*   Updated: 2022/03/23 11:41:43 by pgas-gar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/* Muestra el número usado como parámetro, 
siendo posible reflejar todos los valores 
posibles de la variable int. */

void	ft_putnbr(int n)
{
	if (n == INT_MIN)
	{
		ft_putchar('-');
		ft_putchar('2');
		n = n - 2000000000;
	}
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n < 10)
		ft_putchar(n + '0');
	else
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}
