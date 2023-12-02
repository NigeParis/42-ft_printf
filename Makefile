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
MAIN_SRC=$(addprefix $(SRC_DIR), $(MAIN))
MAIN_OBJ=$(addprefix $(OBJ_DIR), $(MAIN:.c=.o))
CC=cc
###############################################################################
## SOURCES 

SRC_DIR=./src/
OBJ_DIR=
INCLUDE=./src/
SRC=ft_printf.c ft_formatcheck.c ft_printf_unsigned_nbr.c
SRC+=ft_printf_nbr.c ft_printf_str.c ft_len_of_nbr.c
SRC+=ft_printf_hex.c ft_printf_ptr.c ft_printf_char.c
MAIN=test_printf.c



HEADER=ft_printf.h
###############################################################################
## RULES

all: $(NAME)
	@echo "\nDone ! .......\n"

$(NAME): $(OBJ)
	@echo "\nCreating Libft.a FILE .......\n"
	ar -rcs $(NAME) $(OBJ)
	@echo "\nlinking FILES .......\n"
	cc $(OBJ) $(MAIN_OBJ) -o $(EXEC)

$(OBJ):
	@echo "\nCOMPILE all c files to .o FILES .......\n"
	$(CC) $(CFLAGS) $(CCOPTIONS) $(SRCS) -I$(HEAD)
	$(CC) $(CFLAGS) $(CCOPTIONS) $(MAIN_SRC) -o $(MAIN_OBJ)
	
clean:
	rm -f $(SRC_OBJ) $(MAIN_OBJ) 

fclean:clean
	@echo "\nFCLEAN all .o et .a files .......\n"
	rm -f $(NAME) $(EXEC)

re:fclean all
	@echo "\nAll erased and re-compiled .......\n"

.PHONY: all clean fclean re
