###############################################################################
## ARGUMENTS

NAME=libftprintf.a
EXEC=out
CFLAGS=-Wall -Wextra -Werror
SRCS=$(addprefix $(SRC_DIR), $(SRC))
OBJ=$(SRC:.c=.o)
HEAD=$(addprefix $(INCLUDE), $(HEADER))
CCOPTIONS=-c
SRC_OBJ=$(addprefix $(OBJ_DIR), $(OBJ))
LIBFT_SRC=$(addprefix $(LIBFT_DIR), $(LIBFT))
LIBFT_OBJ=$(addprefix $(OBJ_DIR), $(LIBFT:.c=.o))
LIBFT_HEAD=$(addprefix $(LIBFT_DIR), $(LIBFT_HEADER))
MAIN_SRC=$(addprefix $(SRC_DIR), $(MAIN))
MAIN_OBJ=$(addprefix $(OBJ_DIR), $(MAIN:.c=.o))
CC=cc
###############################################################################
## SOURCES 

SRC_DIR=./src/
OBJ_DIR=
LIBFT_DIR=./libft/
INCLUDE=./src/
SRC=ft_printf.c ft_formatcheck.c ft_putnbrprintf_unsigned_fd.c
SRC+=ft_putnbrprintf_fd.c ft_putstrprintf_fd.c ft_len_of_nbr.c
SRC+=ft_print_hex.c ft_print_ptr.c
LIBFT=ft_putchar_fd.c ft_putstr.c ft_putchar.c ft_putstr_fd.c ft_putnbr_fd.c
LIBFT+=ft_strlen.c
MAIN=test_printf.c



HEADER=ft_printf.h
LIBFT_HEADER=libft.h
###############################################################################
## RULES

all: $(NAME)
	@echo "\nDone ! .......\n"

$(NAME): $(OBJ)
	@echo "\nCreating Libft.a FILE .......\n"
	ar -rcs $(NAME) $(OBJ)
	@echo "\nlinking FILES .......\n"
	cc $(OBJ) $(LIBFT_OBJ) $(MAIN_OBJ) -o $(EXEC)

$(OBJ):
	@echo "\nCOMPILE all c files to .o FILES .......\n"
	$(CC) $(CFLAGS) $(CCOPTIONS) $(LIBFT_SRC) -I$(LIBFT_HEAD)
	$(CC) $(CFLAGS) $(CCOPTIONS) $(SRCS) -I$(HEAD) -I$(LIBFT_HEAD)
	$(CC) $(CFLAGS) $(CCOPTIONS) $(MAIN_SRC) -o $(MAIN_OBJ)
	
clean:
	rm -f $(SRC_OBJ) $(LIBFT_OBJ) $(MAIN_OBJ)

fclean:clean
	@echo "\nFCLEAN all .o et .a files .......\n"
	rm -f $(NAME) $(EXEC)

re:fclean all
	@echo "\nAll erased and re-compiled .......\n"

.PHONY: all clean fclean re bonus
