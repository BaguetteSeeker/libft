# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: epinaud <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/25 16:30:14 by epinaud           #+#    #+#              #
#    Updated: 2024/09/25 18:32:48 by epinaud          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIB_SRC = ft_isalpha.c \
		ft_isdigit.c \
		ft_strlcat.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_nbrlen.c \
		ft_strlen.c \
		ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strncmp.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strnstr.c \
		ft_atoi.c \
		ft_strdup.c \
		ft_calloc.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_split.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_striteri.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \

BONUS_SRC = ft_lstnew_bonus.c \
			ft_lstadd_front_bonus.c \
			ft_lstsize_bonus.c \
			ft_lstlast_bonus.c \
			ft_lstadd_back_bonus.c \
			ft_lstdelone_bonus.c \
			ft_lstclear_bonus.c \
			ft_lstiter_bonus.c \
			ft_lstmap_bonus.c \
  
OBJ = $(addprefix $(OBJ_DIR)/, $(LIB_SRC:.c=.o))

OBJ_ALL = $(addprefix $(OBJ_DIR)/, $(LIB_SRC:.c=.o) $(BONUS_SRC:.c=.o))

CFLAGS = -Wall -Wextra -Werror -I . -ggdb3

NAME = libft.a

OBJ_DIR = .obj

$(OBJ_DIR)/%.o : %.c
	$(CC) -c $(CFLAGS) -o $@ $<

all: $(NAME)

$(NAME): $(OBJ_DIR) $(OBJ)
	ar rcs $(NAME) $(OBJ)

bonus: $(OBJ_DIR) $(OBJ_ALL)
	ar rcs $(NAME) $(OBJ_ALL)

.obj:
	@mkdir -p .obj

clean:
	@rm -f $(OBJ_ALL)

fclean:  clean
	@rm -f $(NAME)
	@rm -rf $(OBJ_DIR)

re: fclean $(NAME)

.PHONY:  all clean fclean re bonus
