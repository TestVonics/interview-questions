SRC_DIR		:= src
BLD_DIR		:= build

PROG		:= my_program
SRCS		:= main.cpp
OBJS		:= $(SRCS:%.cpp=$(BLD_DIR)/%.o)

CPPFLAGS	:= -Iinclude -MMD -MP

.PHONY: all clean

all: $(PROG)

$(PROG): $(OBJS)
	$(CXX) $(LDFLAGS) $^ $(LDLIBS) -o $@

$(BLD_DIR)/%.o: $(SRC_DIR)/%.cpp | $(BLD_DIR)
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -c $< -o $@

$(BLD_DIR):
	mkdir -p $@

clean:
	@$(RM) -r $(PROG) $(BLD_DIR)

-include $(OBJS:.o=.d)
