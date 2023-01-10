/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvonsovs <fvonsovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 17:08:39 by fvonsovs          #+#    #+#             */
/*   Updated: 2022/10/22 14:34:29 by fvonsovs         ###   ########.fr       */
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

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
		i++;
	return(s1[i] - s2[i]);

}

int	main(void)
{
	char a[] = {"Fuck youFuck youFuck youFuck you"};
	char b[] = {"FuckFuckFuckFuckFuckFuckFuck you"};
	char p;

	p = ft_strcmp(a, b);
	
	if (p < 0)
		ft_putstr("s1 is less than s2");
	else if (p == 0)
		ft_putstr("s1 equals s2");
	else if (p > 0)
		ft_putstr("s1 is more than s2");

	return (0);
}