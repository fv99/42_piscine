/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvonsovs <fvonsovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 18:50:02 by fvonsovs          #+#    #+#             */
/*   Updated: 2022/10/20 18:44:36 by fvonsovs         ###   ########.fr       */
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
	while(str[i] != '\0')
		i++;
	return(i);
}

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	x;

	x = ft_strlen(src);
	i = 0;
	if (size != 0)
	{
		while ((i < size - 1) && src [i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (x);
}

int	main(void)
{
	char a[] = {"FuckyouFuckyouFuckyouFuckyouFuckyou"};
	char b[64];	
	char *p;

	p = ft_strlcpy(b, a, 20);
	ft_putstr(p);

	return (0);
}