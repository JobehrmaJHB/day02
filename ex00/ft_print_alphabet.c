/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobehrma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 16:45:55 by jobehrma          #+#    #+#             */
/*   Updated: 2020/07/09 08:53:38 by jobehrma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

	void ft_putchar(char c) {
		write(1, &c, 1);

	}

	void ft_print_alphabet(void) {
		char c;

		c = 'a';
		while (c <= 'z'){
				ft_putchar(c);
				c++;
		}
	}

	int		main(void) {

		ft_print_alphabet();
		return (0);
	}
