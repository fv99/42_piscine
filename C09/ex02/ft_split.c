/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvonsovs <fvonsovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 20:46:15 by fvonsovs          #+#    #+#             */
/*   Updated: 2022/11/03 16:53:34 by fvonsovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	sepcheck(char str, char *charset)
{
	int	i;

	i = 0;
	while(charset[i] != '\0')
	{
		if (str == charset[i])
			return(1);
		i++;
	}
	return (0);
}

int	stringcount(char *str, char *charset)
{
	int	i;
	int x;

	i = 0;
	x = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && sepcheck(str[i], charset))
			i++;
		if (str[i] != '\0')
			x++;
		while (str[i] != '\0' && !sepcheck(str[i], charset))
			i++;
	}
	return (x);
}

int	ft_strlen(char *str, char *charset)
{
	int i;

	i = 0;
	while (str[i] && !sepcheck(str[i], charset))
		i++;
	return (i);
}

char *split(char *str, char *charset)
{
	int		i;
	int		l;
	char	*out;

	i = 0;
	l = ft_strlen(str, charset);
	out = (char *)malloc((l * 4) + 1);
	while (i < l)
	{
		out[i] = str[i];
		i++;
	}
	out[i] = '\0';
	return (out);
}

char	**ft_split(char *str, char *charset)
{
	char	**string;
	int 	i;

	i = 0;
	string = (char **)malloc((4 * stringcount(str, charset)) + 1);
	if (!string)
		return (NULL);
	while (*str != '\0')
	{
		while (*str != '\0' && sepcheck(*str, charset))
			str++;
		if (*str != '\0')
		{
			string[i] = split(str, charset);
			i++;
		}
		while (*str && !sepcheck(*str, charset))
			str++;		
	}
	string[i] = '\0';
	return (string);
}

int	main(int argc, char **argv)
{
	int		index;
	char	**split;
	(void)	argc;
	split = ft_split(argv[1], argv[2]);
	index = 0;
	while (split[index])
	{
		printf("%s\n", split[index]);
		index++;
	}
}