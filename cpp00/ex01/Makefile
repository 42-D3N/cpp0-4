NAME = my_awesome_phonebook

SRCS =	PhoneBook.cpp \
		Contact.cpp \
		main.cpp

OBJS = $(SRCS:.cpp=.o)

CC = c++

CPPFLAGS = -std=c++98 -Wall -Wextra -Werror -g

%.o: %.cpp
	${CC} ${CPPFLAGS} -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
