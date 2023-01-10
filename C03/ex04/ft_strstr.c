/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvonsovs <fvonsovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 00:01:49 by fvonsovs          #+#    #+#             */
/*   Updated: 2022/10/21 19:25:36 by fvonsovs         ###   ########.fr       */
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

char *ft_strstr (char *str, char *to_find)
{
	int	i;
	int l;

	i = 0;
	l = 0;
	if (to_find[l] == '\0')
		return (str);
	while (str[i] != '\0')
	{



	}

}

int	main(void)
{
	char a[] = {"Fuck youFuck youFuck youFuck you"};
	char b[] = {"youFuck"};
	char *p;

	p = ft_strncat(a, b);
	ft_putstr(p);

	return (0);
}
