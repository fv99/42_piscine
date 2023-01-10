/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvonsovs <fvonsovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 17:33:36 by fvonsovs          #+#    #+#             */
/*   Updated: 2022/11/03 17:36:31 by fvonsovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char z = '0';

	while (z <= '9')
	{
		write(1, &z, 1);
		z++;
	}
}

int	main()
{
	ft_print_numbers();
	return(0);
}