/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvonsovs <fvonsovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 14:27:09 by fvonsovs          #+#    #+#             */
/*   Updated: 2022/10/20 18:46:34 by fvonsovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);

}

int	ft_char_is_printable(char str)
{
	if (str >= 32 && str <= 126)
		return(0);
	else
		return(1);
}

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if 	(!ft_char_is_printable(str[i]))
			ft_putchar(str[i]);
		else 
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[str[i] / 16]);
			ft_putchar("0123456789abcdef"[str[i] % 16]);
		}
		i++;
	}
}

int	main(void)
{
	char r[] = {"Fuck you\n Fuck\t you"};

	ft_putstr_non_printable(r);
	
	return (0);
}