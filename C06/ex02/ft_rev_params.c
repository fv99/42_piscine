/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvonsovs <fvonsovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 19:30:07 by fvonsovs          #+#    #+#             */
/*   Updated: 2022/10/24 20:10:34 by fvonsovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int i;
	int n;

	n = argc - 1;
	while (n > 0)
	{
		i = 0;
		while (argv[n][i] != '\0')
		{
			ft_putchar(argv[n][i]);
			i++;
		}
		ft_putchar('\n');
		n--;
	}
}