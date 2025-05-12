NAME = libftprintf.a

HEADER = libft.h, printf.h

SOURCES = 
		
Objects = $(SOURCES:.c=.o)

ObjectsBonus = $(SourcesBonus:.c=.o)

CC = cc

CFLAGS = -Wall -Wextra -Werror

AR = ar rcs

RM = rm -f

SourcesBonus =	

all: $(NAME)

$(NAME): $(Objects) 
	$(AR) $(NAME) $(Objects) 

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

bonus: $(ObjectsBonus)
	$(AR) $(NAME) $(ObjectsBonus)

clean: 
	$(RM) $(Objects)	

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
