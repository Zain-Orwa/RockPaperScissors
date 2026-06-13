NAME = rps

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++17

INCLUDES = -Iinclude

SRCS = src/main.cpp \
       src/game/computer.cpp \
       src/game/game_logic.cpp \
       src/game/player.cpp \
       src/session/session.cpp \
       src/ui/display.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re