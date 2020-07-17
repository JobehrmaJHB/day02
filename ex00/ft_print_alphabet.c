/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobehrma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 16:45:55 by jobehrma          #+#    #+#             */
/*   Updated: 2020/07/17 14:13:57 by jobehrma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar(char c )
{
	write (1 ,&c, 1);
	return(0);
}

void ft_print_alphabet(void)

{
	char letter;
	letter = 'a';

	while (letter <= 'z')
	
	{
		ft_putchar(letter);
				letter++;
	}
	
}

	int main()
{
	ft_print_alphabet();
	ft_putchar('\n');
	return(0);
}
