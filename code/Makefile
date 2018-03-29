# Compiler and flags
CC = g++
CFLAGS = -c -std=c++14 
LFLAGS = -lm

# Paths to the sub-directories
SOURCE_DIR = ./src
BUILD_DIR = ./build
INCLUDE_DIR = ./include

# Executable
EXE = prototype 

SRC = $(wildcard $(SOURCE_DIR)/*.cpp)
M_SRC = $(wildcard $(SOURCE_DIR)/model/*.cpp)
C_SRC = $(wildcard $(SOURCE_DIR)/controller/*.cpp)
V_SRC = $(wildcard $(SOURCE_DIR)/view/*.cpp)
INC = $(wildcard $(INCLUDE_DIR)/*.hpp)

OBJ = $(patsubst $(SOURCE_DIR)/%.cpp, $(BUILD_DIR)/%.o,$(SRC))
M_OBJ = $(patsubst $(SOURCE_DIR)/model/%.cpp, $(BUILD_DIR)/%.o,$(M_SRC))
V_OBJ = $(patsubst $(SOURCE_DIR)/view/%.cpp, $(BUILD_DIR)/%.o,$(V_SRC))
C_OBJ = $(patsubst $(SOURCE_DIR)/controller/%.cpp, $(BUILD_DIR)/%.o,$(C_SRC))



all: dir $(BUILD_DIR)/$(EXE) 

dir:
	mkdir -p $(BUILD_DIR)


$(BUILD_DIR)/$(EXE): $(M_OBJ) $(C_OBJ) $(V_OBJ) $(OBJ)
	$(CC) $^ -std=c++14 -o $@ $(LFLAGS) 


$(BUILD_DIR)/%.o : $(INCLUDE_DIR)/%.hpp 


$(OBJ): $(BUILD_DIR)/%.o: $(SOURCE_DIR)/%.cpp    
	$(CC) $(CFLAGS) $< -o $@ -I$(INCLUDE_DIR)  

$(M_OBJ): $(BUILD_DIR)/%.o: $(SOURCE_DIR)/model/%.cpp    
	$(CC) $(CFLAGS) $< -o $@ -I$(INCLUDE_DIR)  

$(C_OBJ): $(BUILD_DIR)/%.o: $(SOURCE_DIR)/controller/%.cpp    
	$(CC) $(CFLAGS) $< -o $@ -I$(INCLUDE_DIR)  


$(V_OBJ): $(BUILD_DIR)/%.o: $(SOURCE_DIR)/view/%.cpp    
	$(CC) $(CFLAGS) $< -o $@ -I$(INCLUDE_DIR)  



run:
	./$(BUILD_DIR)/$(EXE)

clean:
	rm -f $(BUILD_DIR)/*.o $(BUILD_DIR)/$(EXE) 
	rm -r $(BUILD_DIR)
