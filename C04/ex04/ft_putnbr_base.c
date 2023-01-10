/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvonsovs <fvonsovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 18:07:11 by fvonsovs          #+#    #+#             */
/*   Updated: 2022/10/22 20:09:17 by fvonsovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (*(str + i))
	{
		i++;
	}
	write(1, str, i);
}

int	ft_base(char *base)
{
	if (base == "0123456789")
		return (1);
	else if (base == "01")
		return (2);
	else if (base == "0123456789ABCDEF")
		return (3);
	else if (base == "poneyvif")
		return (4);
	else
		return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	char	*out;

	base = 0;
	out = nbr % 16;
	nbr/=16;

	ft_putstr(nbr);
}

int	main ()
{
	ft_putnbr_base(420, 1);

	return (0);
}
