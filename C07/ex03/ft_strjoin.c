/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvonsovs <fvonsovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 18:43:01 by fvonsovs          #+#    #+#             */
/*   Updated: 2022/11/01 19:30:24 by fvonsovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	len_dst;
	int	i;

	len_dst = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[len_dst + i] = src[i];
		i++;
	}
	dest[len_dst + i] = '\0';
	return (dest);
}

int	fullsize(int size, char **strs, char *sep)
{
	int	total;
	int	i;

	i = 0;
	total = 0;
	while (i < size)
	{
		total = total + ft_strlen(strs[i]) + ft_strlen(sep);
		i++;
	}
	total = total - ft_strlen(sep);
	return (total);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*str;

	i = 0;
	str = malloc(fullsize(size, strs, sep) * 1);
	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	if (!str)
		return (NULL);
	while (i < size)
	{
		ft_strcat(str, strs[i]);
		ft_strcat(str, sep);
		i++;
	}
	str[ft_strlen(str) - 1] = '\0';
	return (str);
}

int	main(void)
{
	char	**strs;
	char	*separator;
	char	*result;
	int		size;

	size = 3;
	strs = (char **)malloc(3 * sizeof(char *));
	strs[0] = (char *)malloc(sizeof(char) * 5 + 1);
	strs[1] = (char *)malloc(sizeof(char) * 4 + 1);
	strs[2] = (char *)malloc(sizeof(char) * 11 + 1);
	strs[0] = "Fuck";
	strs[1] = "you";
	strs[2] = "Moulinette";
	separator = " - ";
	result = ft_strjoin(size, strs, separator);
	printf("%s$\n", result);
	free (result);
}
