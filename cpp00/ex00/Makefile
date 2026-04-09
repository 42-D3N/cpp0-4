NAME = megaphone

SRCS = megaphone.cpp

OBJS = $(SRCS:.cpp=.o)

CC = c++

CFLAGS = -std=c++98 -Wall -Wextra -Werror -g

%.o: %.cpp
	${CC} ${CPPFLAGS} -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	@if [ -f $(OBJS) ]; then \
		rm -f $(OBJS); \
		echo "$(OBJS) deleted !"; \
	else \
		echo "Nothing to be done for 'clean'."; \
	fi

fclean: clean
	@if [ -f $(NAME) ]; then \
		rm -f $(NAME); \
		echo "$(NAME) deleted !"; \
	else \
		echo "Nothing to be done for 'fclean'."; \
	fi

re: fclean all

.PHONY: all clean fclean re

