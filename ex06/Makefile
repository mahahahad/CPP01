CXX := c++
CXXFLAGS := -Wall -Werror -Wextra
OS := $(shell uname)

# Include the appropriate compiler version of C++98
ifeq ($(OS), Linux)
	CXXFLAGS += -std=c++98
else
	CXXFLAGS += -std=gnu++98
endif

SRCS := Harl.cpp main.cpp

OBJS_DIR := objects
OBJS := $(addprefix $(OBJS_DIR)/, $(SRCS:.cpp=.o))

NAME := harlFilter

all: $(NAME)

$(NAME): $(OBJS)
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
	@echo "Created" $(NAME)

$(OBJS_DIR)/%.o: %.cpp | $(OBJS_DIR)
	@$(CXX) $(CXXFLAGS) -c $< -o $@
	@echo "Created" $@

$(OBJS_DIR):
	@mkdir -p $(OBJS_DIR)

clean:
	rm -rf $(OBJS_DIR)

fclean: clean
	rm -rf $(NAME) $(NAME).exe

re: fclean all

debug: CXXFLAGS += -g -fsanitize=address
debug: re

.PHONY: all clean fclean re debug
