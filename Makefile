
CC	=	g++

NAME	=	YOLOrpg.out

CPPFLAGS	=	-W -Wall -Wextra -Werror -std=c++03 -I./inc

SRCS	=	src/main.cpp \
			src/Game.cpp \
			src/Character.cpp

OBJS	=	$(SRCS:.cpp=.o)

RM	=	rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.phony: re fclean clean all
