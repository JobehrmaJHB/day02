/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_nagitive.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobehrma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 08:08:38 by jobehrma          #+#    #+#             */
/*   Updated: 2020/07/10 14:39:34 by jobehrma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar(char c)
{
	write (1, &c, 1);
	return (0);
}

void ft_is_negative(int n)
{
	if (n < 0)
	{
	ft_putchar( 'N');
	}

	else if(n > 0)
	{
	ft_putchar( 'P' );
	}

}
int	main()
{
	ft_is_negative(-5);
	ft_putchar('\n');
	return (0);
}
