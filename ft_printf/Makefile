SRCS_DIR = ./src
HEADERS_DIR = ../includes
OBJS_DIR = ./obj
LIBFT_DIR = ../

CFLAGS = -Wall -Wextra -Werror
LEAKCHECK = -g -fsanitize=address
CC = gcc $(CFLAGS)
RM = rm -f

NAME = libftprintf.a

SRCS_FILES = ft_printf.c \
			flag_parse.c \
			format_str_string.c \
			format_nbr_string.c \
			format_hex_string.c

SRCS = $(addprefix $(SRCS_DIR)/, $(SRCS_FILES))

HEADERS_FILES = ft_printf.h
HEADERS = $(addprefix $(HEADERS_DIR)/, $(HEADERS_FILES))

OBJS_FILES = ${SRCS_FILES:.c=.o}
OBJS = $(addprefix $(OBJS_DIR)/, $(OBJS_FILES))

LIBFT = $(LIBFT_DIR)/libft.a

all: $(NAME) 

$(NAME): $(LIBFT) $(OBJS_DIR) $(OBJS)
	@cp $(LIBFT) $(NAME)
	@ar rcs $(NAME) $(OBJS)

$(OBJS_DIR):
	@mkdir -p $(OBJS_DIR)

${OBJS_DIR}/%.o: $(SRCS_DIR)/%.c $(HEADERS)
	@$(CC) -I../ -I./src -c $< -o $@

bonus: $(NAME)

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)
	@rm -rf $(OBJS_DIR)

re: fclean all

.PHONY:	all clean fclean re bonus