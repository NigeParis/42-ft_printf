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
MAIN_SRC=$(addprefix $(SRC_DIR), $(MAIN))
MAIN_OBJ=$(addprefix $(OBJ_DIR), $(MAIN:.c=.o))
CC=cc
###############################################################################
## SOURCES 

SRC_DIR=./src/
OBJ_DIR=
LIBFT_DIR=./libft/
INCLUDE=./src/
SRC=ft_printf.c
LIBFT=ft_putchar_fd.c
MAIN=test_printf.c



HEADER=libftprintf.h
###############################################################################
## RULES

all: $(NAME)
	@echo "\nDone ! .......\n"

$(NAME): $(OBJ)
	@echo "\nCreating Libft.a FILE .......\n"
#	ar -rcs $(NAME) $(OBJ)
	@echo "\nlinking FILES .......\n"
	cc $(OBJ) $(LIBFT_OBJ) $(MAIN_OBJ) -o $(EXEC)

$(OBJ):
	@echo "\nCOMPILE all c files to .o FILES .......\n"
	$(CC) $(CFLAGS) $(CCOPTIONS) $(LIBFT_SRC) -I../libft/libft.h
	$(CC) $(CFLAGS) $(CCOPTIONS) $(SRCS) -I.$(HEAD)
	$(CC) $(CFLAGS) $(CCOPTIONS) $(MAIN_SRC) -I.$(HEAD) -o $(MAIN_OBJ)
	
clean:
	rm -f $(SRC_OBJ) $(LIBFT_OBJ) $(MAIN_OBJ)

fclean:clean
	@echo "\nFCLEAN all .o et .a files .......\n"
	rm -f $(NAME) $(EXEC)

re:fclean all
	@echo "\nAll erased and re-compiled .......\n"

.PHONY: all clean fclean re bonus
