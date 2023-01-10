/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvonsovs <fvonsovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 23:44:39 by fvonsovs          #+#    #+#             */
/*   Updated: 2022/10/21 19:06:18 by fvonsovs         ###   ########.fr       */
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

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char *ft_strcat(char *dest, char *src)
{
	int i;
	int l;

	i = 0;
	l = ft_strlen(dest);

	while (src[i] != '\0')
	{
		dest[i + l] = src[i];
		i++;
	}
	dest[i + l] = '\0';
	return (dest);
}

int	main(void)
{
	char a[] = {"Fuck youFuck youFuck youFuck you"};
	char b[] = {"FuckFuckFuckFuckFuckFuckFuckFuck"};
	char *p;

	p = ft_strcat(a, b);
	ft_putstr(p);

	return (0);
}