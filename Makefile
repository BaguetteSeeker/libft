# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: epinaud <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/25 16:30:14 by epinaud           #+#    #+#              #
#    Updated: 2024/12/20 04:36:23 by epinaud          ###   ########.fr        #
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
		ft_putnbr_base_fd.c \
		ft_base_integrity.c \
		ft_check_dup.c \
		ft_min_max.c \
		ft_clean_memtree.c \
		ft_realloc.c \
		ft_arrays.c \
		ft_swap.c

PRINTF_FILES = printf.c \
		ft_print_argument.c \
		ft_parse_directives.c \
		ft_print_directives.c \

GNL = get_next_line.c \

BONUS_SRC = ft_lstnew_bonus.c \
			ft_lstadd_front_bonus.c \
			ft_lstsize_bonus.c \
			ft_lstlast_bonus.c \
			ft_lstadd_back_bonus.c \
			ft_lstdelone_bonus.c \
			ft_lstclear_bonus.c \
			ft_lstiter_bonus.c \
			ft_lstmap_bonus.c \
  
OBJ = $(addprefix $(OBJ_DIR)/, $(LIB_SRC:.c=.o) $(PRINTF_FILES:.c=.o) $(GNL:.c=.o) $(BONUS_SRC:.c=.o)) 

CFLAGS = -Wall -Wextra -Werror

INCLUDES = -I. -I../ -Iprintf/

NAME = libft.a

OBJ_DIR = .obj

VPATH = printf

$(OBJ_DIR)/%.o : %.c
	$(CC) -c $(CFLAGS) $(INCLUDES) -o $@ $<

all: $(NAME)

$(NAME): $(OBJ_DIR) $(OBJ)
	ar rcs $(NAME) $(OBJ)

.obj:
	@mkdir -p .obj

clean:
	@rm -f $(OBJ_ALL)

fclean:  clean
	@rm -f $(NAME)
	@rm -rf $(OBJ_DIR)

re: fclean $(NAME)

.PHONY:  all clean fclean re
