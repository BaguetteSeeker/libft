# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: epinaud <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/25 16:30:14 by epinaud           #+#    #+#              #
#    Updated: 2024/05/25 21:16:54 by epinaud          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFILES  = ft_isalpha.c ft_isdigit.c ft_strlcat.c ft_isalnum.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memcpy.c ft_memmove.c
  
OFILES = $(CFILES:.c=.o)

CFLAGS = -Wall -Wextra -Werror -I .

NAME = libft.a

all: $(NAME)

$(NAME): $(OFILES)
	ar rcs $(NAME) $(OFILES) 

clean:
	rm -f $(OFILES)

fclean:  clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY:  all clean fclean re
