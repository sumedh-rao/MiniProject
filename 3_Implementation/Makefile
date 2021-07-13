ifdef OS
	RM = del /q
	FixPath = $(subst /,\,$1)
	EXEC = exe
else
	ifeq ($(shell uname), Linux)
		RM = rm -rf
		FixPath = $1
		EXEC = out
	endif
endif

PROJ_NAME = Parking Managemet System
TEST_PROJ_NAME = Test_$(PROJ_NAME)

BUILD_DIR = Build

SRC = src/bike.c\
src/car.c\
src/clear.c\
src/menu.c\
src/rikshaw.c\
src/status.c\
src/test.c\
src/truck.c\
#main.c

TEST_SRC = test/test.c\
unity/unity.c

 INC = -Iinc\
-Iunity

#INC = inc\
#-Iunity
#all: $(SRC) $(BUILD_DIR)
#	gcc -I $(INC) $(SRC) -o $(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC))

#run: all
#	$(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))

all: $(SRC) $(TEST_SRC) $(BUILD_DIR)
	gcc $(SRC) $(TEST_SRC) $(INC) -o $(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))
 
 
run: all 	
	$(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))

$(BUILD_DIR):
	mkdir $(BUILD_DIR)

clean:
	$(RM) $(call FixPath,$(BUILD_DIR)/*)