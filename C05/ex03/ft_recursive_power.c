/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvonsovs <fvonsovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 17:46:43 by fvonsovs          #+#    #+#             */
/*   Updated: 2022/10/25 19:59:33 by fvonsovs         ###   ########.fr       */
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

int	ft_recursive_power(int nb, int power)
{
	unsigned int	out;

	out = 1;
	if (power < 0)
		return (0);
	else if (nb == 0 && power == 0)
		return (1);
	if (power > 0)
	{
		out = out * nb * ft_recursive_power(nb, power - 1);
		power--;
	}
	return (out);
}
int	main(void)
{
	int i = ft_recursive_power(2, 8);
	ft_putnbr(i);
}