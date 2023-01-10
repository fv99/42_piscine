/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvonsovs <fvonsovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 18:24:02 by fvonsovs          #+#    #+#             */
/*   Updated: 2022/11/03 18:30:22 by fvonsovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int i = 0;

	if(argc > 1)
	{
		argc--;
		while (argv[argc][i] != '\0')
		{
			write(1, &argv[argc][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return(0);

}