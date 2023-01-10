/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvonsovs <fvonsovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 17:19:28 by fvonsovs          #+#    #+#             */
/*   Updated: 2022/10/27 20:02:48 by fvonsovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	x;
	int	*range;

	i = 0;
	x = max - min;
	range = malloc(x * 4);
	if (min >= max)
		return (NULL);
	if (range == 0)
		return (NULL);
	while (i < x)
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}

int	main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	i;
	int	size;

	i = 0;
	min = 4;
	max = 20;
	size = max - min;
	tab = ft_range(min, max);
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
}
