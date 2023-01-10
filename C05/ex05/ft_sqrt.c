/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvonsovs <fvonsovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 21:23:56 by fvonsovs          #+#    #+#             */
/*   Updated: 2022/10/25 20:23:15 by fvonsovs         ###   ########.fr       */
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

int	ft_sqrt(int nb)
{
	long	i;
	long	num;

	num = nb;
	i = 2;
	if (num <= 0)
		return (0);
	else if (num == 1)
		return (1);
	else if (num >= 2)
	{
		while ((i * i) <= num)
		{
			if ((i * i) == num)
			{
				return (i);
			}
			i++;
		}
	}
	return (0);
}

int	main(void)
{	
	int i = ft_sqrt(16);
	ft_putnbr(i);
}