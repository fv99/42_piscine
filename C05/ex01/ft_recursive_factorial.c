/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvonsovs <fvonsovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 21:44:47 by fvonsovs          #+#    #+#             */
/*   Updated: 2022/10/25 21:35:10 by fvonsovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int nb)
{
    if (nb < 0)
    {
        ft_putchar('-');
        ft_putnbr(-nb);
    }
    else if (nb > 9)
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
    else
    {
        ft_putchar(nb + '0');
    }
}

int	ft_recursive_factorial(int nb)
{
	unsigned int	out;

	out = 1;
	if (nb > 0)
	{
		out = out * nb * ft_recursive_factorial(nb - 1);
		nb--;
	}
	if (nb < 0)
		return (0);
	return (out);
}

int	main(void)
{
	int i = ft_recursive_factorial(5);
	ft_putnbr(i);
}
