/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvonsovs <fvonsovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 20:25:54 by fvonsovs          #+#    #+#             */
/*   Updated: 2022/10/24 20:26:33 by fvonsovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	counter;
	int	temp;

	i = 0;
	while (i < size)
	{
		counter = 0;
		while (counter < size - i)
		{
			if (tab[counter] > tab[counter + 1])
			{
				temp = tab[counter];
				tab[counter] = tab[counter + 1];
				tab[counter + 1] = temp;
			}
			counter++;
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int i;
	int n;

	n = argc - 1;
	while (n > 0)
	{
		i = 0;
		while (argv[n][i] != '\0')
		{
			ft_putchar(argv[n][i]);
			i++;
		}
		ft_putchar('\n');
		n--;
	}
}