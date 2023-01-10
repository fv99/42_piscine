/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvonsovs <fvonsovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 17:59:32 by fvonsovs          #+#    #+#             */
/*   Updated: 2022/10/20 19:21:48 by fvonsovs         ###   ########.fr       */
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

int	ft_str_is_alpha(char str)
{
	if ((str >= 65 && str <= 90) || (str >= 97 && str <= 122))
		return (1);
	else if (str >= 48 && str <= 57)
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		if (!ft_str_is_alpha(str[i])) // if not a character, increment
			i++;
		if (ft_str_is_alpha(str[i])) // if a character then;
		{
			if (!ft_str_is_alpha(str[i - 1])) // if previous is not a character
			{
				if (str[i] >= 97 && str[i] <= 122) // if lowercase make uppercase
					str [i] = str[i] - 32;
				i++;
			}
			else if (ft_str_is_alpha(str[i - 1])) // if previous is a character
			{
				if (str[i] >= 65 && str[i] <= 90) // if uppercase make lowercase
					str [i] = str[i] + 32;	
				i++;	
			}
		}
	}
	return (str);
}

int	main(void)
{
	char r[] = {"fuCk yOU ? fUCk YoU ! +fUck /you #fuckYou"};

	ft_strcapitalize(r);
	ft_putstr(r);
	
	return (0);
}