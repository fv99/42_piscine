/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvonsovs <fvonsovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 20:12:17 by fvonsovs          #+#    #+#             */
/*   Updated: 2022/10/20 18:04:16 by fvonsovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

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


char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return(dest);
}

int	main(void)
{
	char a[] = {"Fuck you"};
	char b[9];	
	char *p;
	
	p = ft_strcpy(b, a);
	printf("%s", p);

	return (0);
}