# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fvonsovs <fvonsovs@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/30 18:33:45 by fvonsovs          #+#    #+#              #
#    Updated: 2022/10/31 20:19:46 by fvonsovs         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror 
NAME	= libft.a
SRCS	= srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
OBJS	= ${SRCS:.c=.o}
LIBC	= ar -cvq 
RM		= rm -f

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o ${<:.c=.o} -I includes

all: $(NAME)

$(NAME): ${OBJS}
	${LIBC} ${NAME} ${OBJS}

clean: 
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all