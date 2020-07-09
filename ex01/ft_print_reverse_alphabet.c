/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobehrma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 11:50:02 by jobehrma          #+#    #+#             */
/*   Updated: 2020/07/09 11:55:53 by jobehrma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

	void ft_putchar(char x)
{
		write(1, &x, 1);
}

	void ft_print_reverse_alphabet(void)
{
		char x;

		x = 'z';
			while (x >= 'a')
			{
				ft_putchar(x);
				x--;
			}
}
	int	main()
{
	ft_print_reverse_alphabet();
	ft_putchar('\n');
	return (0);
}
