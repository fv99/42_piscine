/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvonsovs <fvonsovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 13:48:21 by fvonsovs          #+#    #+#             */
/*   Updated: 2022/10/18 19:44:56 by fvonsovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = -1;
	while (i++ < size--)
	{
		temp = tab[i];
		tab[i] = tab[size];
		tab[size] = temp;
	}
}

