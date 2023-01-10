/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revprint.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvonsovs <fvonsovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 17:45:43 by fvonsovs          #+#    #+#             */
/*   Updated: 2022/11/03 18:23:30 by fvonsovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	str_len(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return(i);
}

char	*ft_rev_print(char *str)
{
	int i = str_len(str);

	while (i >= 0)
	{
		write(1,&str[i], 1);
		i--;
	}
	return(str);
}

int main()
{
	ft_rev_print("Fuck");
	return(0);
}