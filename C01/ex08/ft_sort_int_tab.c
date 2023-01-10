/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvonsovs <fvonsovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 17:57:00 by fvonsovs          #+#    #+#             */
/*   Updated: 2022/10/17 19:18:21 by fvonsovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

// bubble sort