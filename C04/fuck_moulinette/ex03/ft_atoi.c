/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvonsovs <fvonsovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 20:13:05 by fvonsovs          #+#    #+#             */
/*   Updated: 2022/10/24 16:16:22 by fvonsovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_white_space(char c)
{
	if (c == '\f' || c == '\n' || c == '\r')
		return (1);
	if (c == '\t' || c == '\v' || c == ' ')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	result = 0;
	i = 0;
	sign = 1;
	while (is_white_space(str[i]))
		i++;
	while (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			sign *= -1;
	if (!(str[i] >= '0' && str[i] <= '9'))
		return (result);
	while (str[i] >= '0' && str[i] <= '9')
		result = result * 10 + (str[i++] - '0');
	return (result * sign);
}
