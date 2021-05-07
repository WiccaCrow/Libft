# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mdulcie <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/06 21:48:47 by mdulcie           #+#    #+#              #
#    Updated: 2020/11/20 17:16:33 by mdulcie          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ./ft_isprint.c ./ft_putchar_fd.c ./ft_strlcat.c ./ft_substr.c ./ft_atoi.c	./ft_itoa.c ./ft_putendl_fd.c ./ft_strlcpy.c ./ft_tolower.c ./ft_bzero.c ./ft_memccpy.c ./ft_putnbr_fd.c ./ft_strlen.c ./ft_toupper.c ./ft_calloc.c ./ft_memchr.c ./ft_putstr_fd.c ./ft_strmapi.c ./ft_isalnum.c ./ft_memcmp.c ./ft_split.c ./ft_strncmp.c ./ft_isalpha.c ./ft_memcpy.c ./ft_strchr.c ./ft_strnstr.c ./ft_isascii.c ./ft_memmove.c ./ft_strdup.c ./ft_strrchr.c ./ft_isdigit.c ./ft_memset.c ./ft_strjoin.c ./ft_strtrim.c

BONSRC = ./ft_lstadd_back.c ./ft_lstiter.c ./ft_lstsize.c ./ft_lstadd_front.c ./ft_lstlast.c ./ft_lstclear.c ./ft_lstmap.c ./ft_lstdelone.c ./ft_lstnew.c

OBJ = $(SRC:.c=.o)
OBJ_B = $(BONSRC:.c=.o)

HEAD = libft.h
FLAG = -Wall -Wextra -Werror

all:	$(NAME)

%.o: %.c
	gcc $(FLAG) -c $< -I $(HEAD) 

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

bonus:  $(OBJ) $(OBJ_B)
	ar rc $(NAME) $^
	ranlib $(NAME)
clean:
	rm -rf $(OBJ) $(OBJ_B)
fclean:	clean
	rm -rf $(NAME)
re:     fclean all
