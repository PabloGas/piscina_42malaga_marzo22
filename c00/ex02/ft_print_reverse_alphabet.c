/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgas-gar <pgas-gar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 20:25:23 by pgas-gar          #+#    #+#             */
/*   Updated: 2022/03/23 11:04:36 by pgas-gar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/* Muestra el alfabeto en una sola linea en
orden decreciente empezando en la letra "z". */

void	ft_print_reverse_alphabet(void)
{
	char	rev_alphabet;

	rev_alphabet = 'z';
	while (rev_alphabet >= 'a')
	{
		ft_putchar(rev_alphabet);
		rev_alphabet--;
	}
}
