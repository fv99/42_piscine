/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvonsovs <fvonsovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 15:50:00 by fvonsovs          #+#    #+#             */
/*   Updated: 2022/10/20 16:38:12 by fvonsovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);

}

void 	ft_print_adress(void *addr, unsigned int size)
{
	unsigned char adress[16];

	write(1, &"0123456789abcdef" [], 1)
}

void	ft_print_hexadecimal(void *addr, unsigned int size)
{

	
}

void	ft_print_contents (void *addr, unsigned int size)
{

	
}
void	*ft_print_memory(void *addr, unsigned int size)
{
	while (size > 0)
	{


	}	
	return(addr)
}

int	main(void)
{	
	char r[64] = {"Fuck you Fuck you Fuck you Fuck you Fuck "};

	ft_print_memory(r, 64);
	
	return (0);
}