/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobehrma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 11:50:33 by jobehrma          #+#    #+#             */
/*   Updated: 2020/07/10 14:55:01 by jobehrma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar(char c)	
{
	write (1, &c, 1);
	return(0);
}
void ft_print_numbers(void)
{
		char number;

		    number = '0';
			while (number <= '9')
					{
						ft_putchar(number);
						number++;
					}
}

int			main() 
{
	ft_print_numbers();
	ft_putchar('\n');
	return (0);	
}
