# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fvonsovs <fvonsovs@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/30 14:58:37 by fvonsovs          #+#    #+#              #
#    Updated: 2022/10/30 15:01:15 by fvonsovs         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/sh
cc -Wall -Werror -Wextra -c ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
ar -cvq libft.a ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o