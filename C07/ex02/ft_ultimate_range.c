/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvonsovs <fvonsovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 17:51:27 by fvonsovs          #+#    #+#             */
/*   Updated: 2022/10/27 19:22:09 by fvonsovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	x;
	int	*buf;

	i = 0;
	x = max - min;
	buf = malloc(x * 4);
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	if (!buf)
	{
		*range = NULL;
		return (-1);
	}
	while (i < x)
	{
		buf[i] = min + i;
		i++;
	}
	*range = buf;
	return (x);
}

int	main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	size;

	min = 4;
	max = 20;
	size = ft_ultimate_range(&tab, min, max);
	printf("%d", size);
}