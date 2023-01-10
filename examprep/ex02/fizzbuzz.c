/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvonsovs <fvonsovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 17:37:31 by fvonsovs          #+#    #+#             */
/*   Updated: 2022/11/03 18:02:23 by fvonsovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putnumber(int i)
{
	if (i > 9)
		putnumber(i / 10);
	write(1, &"0123456789"[i % 10], 1);
}

int	main()
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 5 == 0 && i % 3 == 0)
			write(1,"fizzbuzz",8);
		else if(i % 3 == 0)
			write(1,"fizz", 4);
		else if (i % 5 == 0)
			write(1,"buzz", 4);
		else
			putnumber(i);
		write(1,"\n",1);
		i++;
	}
}