/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvonsovs <fvonsovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 23:31:57 by fvonsovs          #+#    #+#             */
/*   Updated: 2022/10/22 18:36:31 by fvonsovs         ###   ########.fr       */
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

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] > s2[i])
			return (1);
		else if (s1[i] < s2[i])
			return (-1);
		i++;
	}
	return (0);
}

int	main(void)
{
	char a[] = {"Fuck youFuck youFuck youFuck you"};
	char b[] = {"FuckFuckFuckFuckFuckFuckFuck you"};
	char p;

	p = ft_strncmp(a, b, 20);
	
	if (p < 0)
		ft_putstr("s1 is less than s2");
	else if (p == 0)
		ft_putstr("s1 equals s2");
	else if (p > 0)
		ft_putstr("s1 is more than s2");

	return (0);
}