# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iizquier <iizquier@student.42malaga.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/15 14:35:14 by iizquier          #+#    #+#              #
#    Updated: 2024/05/17 15:29:45 by iizquier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FILES = \
		ft_isalpha.c\
		ft_isdigit.c\
		ft_isprint.c\
		ft_isascii.c\
		ft_isalnum.c\
		ft_tolower.c\
		ft_toupper.c\
		ft_strlen.c\
		ft_strlcat.c\
		ft_strlcpy.c\
		ft_strchr.c\
		ft_memset.c\
		ft_bzero.c\
		ft_strncmp.c\
		ft_strnstr.c\
		ft_strrchr.c\
		ft_memcpy.c\
		ft_memcmp.c\
		ft_memchr.c\
		ft_memmove.c\
		ft_atoi.c\
		ft_calloc.c\
		ft_strdup.c\
		ft_putchar_fd.c\
		ft_substr.c\
		ft_strjoin.c\
		ft_putnbr_fd.c\
		ft_putendl_fd.c\
		ft_putstr_fd.c\
		ft_striteri.c\
		ft_strtrim.c\
		ft_strmapi.c\
		ft_itoa.c\
		ft_split.c\

BONUS_FILE = \
	ft_lstnew_bonus.c\
	ft_lstadd_front_bonus.c\
	ft_lstsize_bonus.c\
	ft_lstlast_bonus.c\
	ft_lstadd_back_bonus.c\
	ft_lstdelone_bonus.c\
	ft_lstclear_bonus.c\
	ft_lstiter_bonus.c\
	ft_lstmap_bonus.c\

OBJ = $(FILES:.c=.o)

BONUS_OBJ = $(BONUS_FILE:.c=.o)

FLAGS = -Wall -Werror -Wextra

$(NAME): $(FILES) $(OBJ)
	@gcc -c $(FLAGS) $(FILES)
	@ar rcs $(NAME) $(OBJ)

all: $(NAME)

bonus: $(BONUS_OBJ)
	@gcc -c $(FLAGS) $(BONUS_FILE)
	@ar rcs $(NAME) $(BONUS_OBJ)
	@echo "Bonus library $(NAME) created!"

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME) $(OBJ)
	@rm -f $(NAME) $(BONUS_OBJ)

re: fclean all

$(OBJ): %.o: %.c
	@$(CC) -c $(FLAGS) $< -o $@

.PHONY: all clean fclean re bonus
