# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dpiza <dpiza@student.42sp.org.br>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/04 18:37:58 by dpiza             #+#    #+#              #
#    Updated: 2021/12/04 19:56:40 by dpiza            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= libft.a

SRCS_DIR		= ./src
OBJS_DIR		= ./obj
INCLUDES_DIR	= ./includes

PRINTF_DIR		= ./ft_printf
PRINTF 			= $(PRINTF_DIR)/libftprintf.a

CC				= gcc
CFLAGS			= -Wall -Wextra -Werror #$(LEAKCHECK)
LEAKCHECK		= -g -fsanitize=address
LFLAGS 			= -L. -I$(INCLUDES_DIR)

RM				= rm -f
NORM			= norminette

INCLUDES_FILES	= libft.h
INCLUDES		= $(addprefix $(INCLUDES_DIR)/, $(INCLUDES_FILES))

# **************************************************************************** #
#                               LIBC FUNCTIONS                                 #
# **************************************************************************** #

LIBC_FILES =	ft_isalpha.c \
				ft_isdigit.c \
				ft_isalnum.c \
				ft_isascii.c \
				ft_isprint.c \
				ft_strlen.c \
				ft_memset.c \
				ft_bzero.c \
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
				ft_calloc.c \
				ft_strdup.c 
		
LIBC_OBJS =		$(addprefix $(OBJS_DIR)/,$(notdir $(LIBC_FILES:.c=.o)))


# **************************************************************************** #
#                            ADITIONAL FUNCTIONS                               #
# **************************************************************************** #

ADT_FILES =		ft_substr.c \
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
				ft_nbr_base.c \
				ft_memccpy.c \
				ft_isspace.c \
				add_char.c \
				ft_ltoa.c \
				ft_dtoa.c \
				ft_atof.c \
				get_next_line.c

ADT_OBJS =		$(addprefix $(OBJS_DIR)/,$(notdir $(ADT_FILES:.c=.o)))

# **************************************************************************** #
#                              LIST FUNCTIONS                                  #
# **************************************************************************** #

LST_FILES =		ft_lstnew.c \
				ft_lstadd_front.c \
				ft_lstsize.c \
				ft_lstlast.c \
				ft_lstadd_back.c \
				ft_lstdelone.c \
				ft_lstclear.c \
				ft_lstiter.c \
				ft_lstmap.c

LST_OBJS =		$(addprefix $(OBJS_DIR)/,$(notdir $(LST_FILES:.c=.o)))

# **************************************************************************** #
#                                   MAKE                                       #
# **************************************************************************** #

$(NAME):		$(OBJS_DIR) $(LIBC_OBJS) $(ADT_OBJS) $(LST_OBJS)
				@ar rcs $(NAME) $(LIBC_OBJS)
				@ar rcs $(NAME) $(ADT_OBJS)
				@ar rcs $(NAME) $(LST_OBJS)

all:			$(NAME)

bonus:			all

printf:			$(NAME)
				@make -C $(PRINTF_DIR) --no-print-directory
				@cp $(PRINTF) $(NAME)

$(OBJS_DIR):
				@mkdir -p $(OBJS_DIR)

$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.c $(INCLUDES)
				@$(CC) $(CFLAGS) $(LFLAGS) -c $< -o $@

.PHONY:			all bonus printf

# **************************************************************************** #
#                                   CLEAN                                      #
# **************************************************************************** #

clean:
				@make -C $(PRINTF_DIR) clean --no-print-directory
				@$(RM) $(LIBC_OBJS)
				@$(RM) $(ADT_OBJS)
				@$(RM) $(LST_OBJS)

fclean:			clean
				@make -C $(PRINTF_DIR) fclean --no-print-directory
				@$(RM) $(NAME)
				@rm -rf $(OBJS_DIR)

re:				fclean all

.PHONY:			clean fclean re

# **************************************************************************** #
#                                NORMINETTE                                    #
# **************************************************************************** #

norm:
				@$(NORM) $(SRCS_DIR)/*.c $(INCLUDES_DIR)/*.h

.PHONY:			norm
