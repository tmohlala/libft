
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmohlala <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/05/10 10:33:22 by mfmalaba          #+#    #+#              #
#    Updated: 2016/08/01 15:14:29 by tmohlala         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a

EXEC		=	test 

C_FILES		=	ft_memset.c\
				ft_bzero.c\
				ft_memcpy.c\
				ft_memmove.c\
				ft_memchr.c\
				ft_memcmp.c\
				ft_strlen.c\
				ft_strdup.c\
				ft_strcpy.c\
				ft_memccpy.c\
				ft_strncpy.c\
				ft_strcat.c\
				ft_strncat.c\
				ft_strlcat.c\
				ft_strchr.c\
				ft_strrchr.c\
				ft_strstr.c\
				ft_strnstr.c\
				ft_strcmp.c\
				ft_strncmp.c\
				ft_atoi.c\
				ft_isalpha.c\
				ft_isdigit.c\
				ft_isalnum.c\
				ft_isascii.c\
				ft_isprint.c\
				ft_toupper.c\
				ft_tolower.c\
				ft_memalloc.c\
				ft_memdel.c\
				ft_strnew.c\
				ft_strdel.c\
				ft_strclr.c\
				ft_striter.c\
				ft_striteri.c\
				ft_strmap.c\
				ft_strmapi.c\
				ft_strequ.c\
				ft_strnequ.c\
				ft_strsub.c\
				ft_strjoin.c\
				ft_strtrim.c\
				ft_strsplit.c\
				ft_itoa.c\
				ft_putchar.c\
				ft_putstr.c\
				ft_putendl.c\
				ft_putchar_fd.c\
				ft_putstr_fd.c\
				ft_putendl_fd.c\
				ft_putnbr.c\
				ft_putnbr_fd.c\
				ft_itoa_base.c\

O_FILES		=	$(C_FILES:.c=.o)
				
CC		=	gcc 
FLAGS	=	-Wall -Wextra -Werror

%.o : %.c libft.h
	$(CC) -c $<

all : $(NAME)

$(NAME) : $(O_FILES)
		ar rc $@ $(O_FILES)
		ranlib $@
		$(CC) $(FLAGS) main.c -o test -L. -lft

clean :
		rm -f $(O_FILES)

fclean : clean
	    rm -f $(NAME) $(EXE)

re : fclean all
