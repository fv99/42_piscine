/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvonsovs <fvonsovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 17:20:53 by fvonsovs          #+#    #+#             */
/*   Updated: 2022/10/20 18:39:28 by fvonsovs         ###   ########.fr       */
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

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 32 && str[i] <= 126)
			i++;
		else
			return(0);
	}
		return (1);
}

int	main(void)
{
	char r[] = {"FUCK YOU \n"};

	if ((ft_str_is_printable(r)) == 1)
		ft_putstr("is printable");
	else
		ft_putstr("is not printable");
	
	return (0);
}