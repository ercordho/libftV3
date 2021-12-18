# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ercordho <ercordho@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/23 12:03:01 by ercordho          #+#    #+#              #
#    Updated: 2021/12/18 01:31:26 by ercordho         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	libft
CC				=	gcc
CFLAGS			=	-Wall -Wextra -Werror
RM				=	rm -f
SRCS			=	srcs/ascii/ft_isalnum.c \
					srcs/ascii/ft_isalpha.c \
					srcs/ascii/ft_ischarset.c \
					srcs/ascii/ft_isdigit.c \
				\
					srcs/memory/ft_memcpy.c \
					srcs/memory/ft_memdel.c \
					srcs/memory/ft_memdels.c \
					srcs/memory/ft_memset.c \
					srcs/memory/ft_realloc.c \
					srcs/memory/ft_swap.c \
				\
					srcs/read/get_next_line.c \
				\
					srcs/string/countwords.c \
					srcs/string/ft_split.c \
					srcs/string/ft_strcat.c \
					srcs/string/ft_strcmp.c \
					srcs/string/ft_strdup.c \
					srcs/string/ft_strjoin.c \
					srcs/string/ft_strlen.c \
					srcs/string/ft_strncmp.c \
					srcs/string/ft_strrev.c \
					srcs/string/ft_strslen.c \
					srcs/string/ft_strsub.c \
				\
					srcs/write/ft_putchar.c \
					srcs/write/ft_putendl.c \
					srcs/write/ft_putendls.c \
					srcs/write/ft_putnbr.c \
					srcs/write/ft_putstr.c \
					srcs/write/ft_putstrs.c \
					srcs/main.c
OBJS			=	$(SRCS:.c=.o)
$(NAME) 		: 	$(OBJS)
					@$(CC) $(CFLAGS) -o $@ $^
all				:	$(NAME)
%.o				:	%.c %.h
					$(CC) $(CFLAGS) -c $<
clean			:
					$(RM) $(OBJS)
fclean			:	clean
					$(RM) $(NAME)
re				:	fclean all
.PHONY			:	all clean fclean re