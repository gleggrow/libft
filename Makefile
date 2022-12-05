# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gleggrow <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/27 10:56:13 by gleggrow          #+#    #+#              #
#    Updated: 2022/01/06 12:32:45 by hovalygta        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c \
ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
ft_split.c ft_memccpy.c ft_memchr.c ft_putchar_fd.c \
ft_itoa.c ft_memcmp.c ft_putnbr_fd.c ft_putstr_fd.c \
ft_strchr.c ft_strdup.c ft_strlen.c ft_putendl_fd.c \
ft_strlcpy.c ft_strjoin.c ft_strmapi.c ft_strncmp.c \
ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_strlcat.c \
ft_tolower.c ft_toupper.c ft_memmove.c ft_substr.c \
ft_memset.c ft_memcpy.c ft_uitoa.c

OBJS = ft_atoi.o ft_bzero.o ft_memcpy.o ft_memset.o \
ft_isalpha.o ft_isascii.o ft_isdigit.o ft_isprint.o \
ft_split.o ft_memccpy.o ft_memchr.o ft_putchar_fd.o \
ft_itoa.o ft_memcmp.o ft_putnbr_fd.o ft_putstr_fd.o \
ft_strchr.o ft_strdup.o ft_strlen.o ft_putendl_fd.o \
ft_strlcpy.o ft_strjoin.o ft_strmapi.o ft_strncmp.o \
ft_strnstr.o ft_strrchr.o ft_strtrim.o ft_strlcat.o \
ft_tolower.o ft_toupper.o ft_memmove.o ft_substr.o \
ft_calloc.o ft_isalnum.o ft_uitoa.o

HEADERS = libft.h

RULES = all clean fclean re 

.PHONY: $(RULES)

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
%.o: %.c
	cc -c -Wall -Wextra -Werror $< -I $(HEADERS) 

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
