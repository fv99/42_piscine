/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvonsovs <fvonsovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 23:56:43 by fvonsovs          #+#    #+#             */
/*   Updated: 2022/10/30 16:55:03 by fvonsovs         ###   ########.fr       */
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

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i;
	unsigned int l;

	i = 0;
	l = ft_strlen(dest);

	while (src[i] != '\0' && i < nb)
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

	p = ft_strncat(a, b, 8);
	ft_putstr(p);

	return (0);
}