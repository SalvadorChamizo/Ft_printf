NAME = libftprintf.a

CC = gcc
FLAGS = -Wall -Werror -Wextra 
AR = ar rcs
RM = rm -f
LIBFT_PATH = ./libft
LIBFT = $(LIBFT_PATH)/libft.a

FILES = ft_printf \
		ft_print_char \
		ft_print_str \
		ft_print_nbr \
		ft_print_ptr \
		ft_print_ptrhex \
		ft_print_unsig \
		ft_print_hex \
		ft_print_hexup \

SRCS_DIR = ./src
SRCS = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES)))

OBJS_DIR = ./src
OBJS = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES)))

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(LIBFT) $(OBJS)
	cp $(LIBFT) $(NAME)
		$(AR) $@ $^

$(LIBFT):
	make -C $(LIBFT_PATH) all

all: $(NAME)

clean: 
	$(RM) $(OBJS)
	make -C $(LIBFT_PATH) clean

fclean: clean
	$(RM) $(NAME)
	make -C $(LIBFT_PATH) fclean

re: clean all

.PHONY = all clean fclean re libft