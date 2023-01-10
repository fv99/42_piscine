/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvonsovs <fvonsovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 20:13:05 by fvonsovs          #+#    #+#             */
/*   Updated: 2022/10/24 16:09:39 by fvonsovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_count_signs(char *str)
{
	int i;
	int neg;
	int pos;

	i = 0;
	neg = 0;
	pos = 0;
	while (!(str[i] >= '0' && str[i] <= '9'))
	{
		if (str[i] == '-')
			neg++;
		else if (str[i] == '+')
			pos++;
		i++;
	}
	if (neg % 2 != 0)
		return(1);
	else 
		return(0);
}

int	ft_atoi(char *str)
{
	int i;
	int atoi;

	i = 0;
	atoi = 0;
	while (!((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122)))
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			atoi = (atoi * 10) + (str[i] - '0'); // character '0' = 68 as int. to get the number of '9' (it's '0' + 9) so to get 9 = '9' - '0'
		}
		i++;
	}
	if (ft_count_signs(str))
		atoi = atoi * -1;
	return (atoi);
}

int	main(void)
{
	char s[] = {"   -----++55 5"};
	
	printf("%d", ft_atoi(s));

}