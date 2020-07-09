/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobehrma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 11:50:33 by jobehrma          #+#    #+#             */
/*   Updated: 2020/07/09 16:27:03 by jobehrma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)	
{
		write(1, &c, 1);
}
void		ft_print_numbers(void)
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
	return (0);	
}
