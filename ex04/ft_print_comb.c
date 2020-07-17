/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobehrma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 09:11:38 by jobehrma          #+#    #+#             */
/*   Updated: 2020/07/10 16:47:57 by jobehrma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char a)
{
	write (1, &a, 1);
	
}

void ft_print_com(void)
{
	char a = '0';
	char b = '0';
	char c = '0';

	while (a <= '9')
	{
		while (b <= '9')
		{
			while (c <= '9')
			{
				if (a < b && b < c)
				{
					ft_putchar (a);
					ft_putchar (b);
					ft_putchar (c);
					ft_putchar(',');
					ft_putchar(' ');
				
				}
				c++;
			}
			c = '0';
			b++;
		}
		b ='0';
		a++;
	}
}
int main()
{
	ft_print_com();
	ft_putchar('\n');
	return (0);
}
