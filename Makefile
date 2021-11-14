SRCS_DIR = ./src
OBJS_DIR = ./obj
INCLUDES_DIR = ./includes
PRINTF_DIR = ./ft_printf

CFLAGS = -Wall -Wextra -Werror
LEAKCHECK = -g -fsanitize=address
CC = gcc $(CFLAGS)
RM = rm -f

NAME = libft.a

SRCS_FILES = ft_memcpy.c ft_isspace.c ft_putstr_fd.c add_char.c \
			ft_calloc.c ft_strdup.c ft_bzero.c ft_strchr.c \
			ft_isdigit.c ft_memset.c ft_strlen.c ft_strlcpy.c \
			ft_strjoin.c ft_ltoa.c ft_itoa.c ft_putchar_fd.c ft_nbr_base.c \
			ft_atoi.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isprint.c \
			ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memmove.c \
			ft_putendl_fd.c ft_putnbr_fd.c ft_split.c ft_strlcat.c \
			ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c \
			ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c \
			get_next_line.c ft_dtoa.c ft_atof.c

SRCS = $(addprefix $(SRCS_DIR)/, $(SRCS_FILES))

INCLUDES_FILES = libft.h
INCLUDES = $(addprefix $(INCLUDES_DIR)/, $(INCLUDES_FILES))

OBJS_FILES = $(SRCS_FILES:.c=.o)
OBJS = $(addprefix $(OBJS_DIR)/, $(OBJS_FILES))

PRINTF = $(PRINTF_DIR)/libftprintf.a

all: $(NAME)

$(NAME): $(OBJS_DIR) $(OBJS)
	@ar rcs $(NAME) $(OBJS)

$(OBJS_DIR):
	@mkdir -p $(OBJS_DIR)

$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.c $(INCLUDES)
	@$(CC) $(FLAGS) -I ./ -c $< -o $@

printf: $(NAME)
	@make -C $(PRINTF_DIR)
	@cp $(PRINTF) $(NAME)

clean:
	@make -C $(PRINTF_DIR) clean
	@$(RM) $(OBJS)

fclean: clean
	@make -C $(PRINTF_DIR) fclean
	@$(RM) $(NAME)
	@rm -rf $(OBJS_DIR)

re: fclean all

.PHONY:	all clean fclean re printf