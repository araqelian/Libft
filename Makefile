NAME = libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRCS = $(wildcard *.c)

SRCSB = $(wildcard ft_lst*.c)

FILTER = $(filter-out $(SRCSB), $(SRCS))

OBJS = $(patsubst %.c, %.o, $(FILTER))

OBJSB = $(patsubst %.c, %.o, $(SRCSB))

RM = rm -f

AR = ar crs

%.o: %.c
	$(CC) $(CFLAGS) -c 	$< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

bonus: $(OBJSB)
	$(AR) $(NAME) $(OBJSB)

clean:
	$(RM) $(OBJS) $(OBJSB)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
