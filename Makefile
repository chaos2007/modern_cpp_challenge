COMPILER ?= clang
ifeq ($(COMPILER),clang)
	CXX = clang
else
	CXX = g++
endif

SRC_DIR := src
OBJ_DIR := obj/$(COMPILER)


SRC_FILES := $(shell find $(SRC_DIR) -name '*.cpp')
OBJ_FILES := $(SRC_FILES:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)

LDFLAGS = -lstdc++
CPPFLAGS += -Iinclude
# CXXFLAGS
CXXFLAGS += -MMD -std=c++11

all: $(OBJ_DIR)/run_tests
	$(OBJ_DIR)/run_tests

$(OBJ_DIR)/run_tests: $(OBJ_FILES)
	$(CXX) $(LDFLAGS) -o $@ $^

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	mkdir -p $(@D)
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -c -o $@ $<

-include $(OBJ_FILES:.o=.d)
