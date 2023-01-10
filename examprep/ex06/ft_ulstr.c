/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ulstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvonsovs <fvonsovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 18:41:58 by fvonsovs          #+#    #+#             */
/*   Updated: 2022/11/03 18:50:00 by fvonsovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i = 0;

	while (str[i] != '\0')
	{
		write(1, (str + i), 1);
		i++;
	}
}


int	main(int argc, char **argv)
{
	int i = 0;

	if(argc > 1)
	{
		argc--;
		while(argv[argc][i] != '\0')
		{
			if (argv[argc][i] >= 65 && argv[argc][i] <= 90)
				argv[argc][i] += 32;
			else if (argv[argc][i] >= 97 && argv[argc][i] <= 122)
				argv[argc][i] -= 32;
			i++;
		}
	}
	ft_putstr(argv[argc]);
	return(0);
}