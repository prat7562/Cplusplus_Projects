
PROJ_NAME =genesis_score
TEST_PROJ_NAME = Test_$(PROJ_NAME)




# All source code files
SRC =src/average.cc\
src/display.cc\
src/eligible.cc\
src/findps.cc\
src/modulestatus.cc\
src/readcsv.cc\
src/sort.cc\

TEST=test/test.cc\

# All test source files


COV_SRC = main.cc

INC_H = inc
INC_T= gtest

ifdef OS
   RM = del 
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif
.PHONY: run clean test doc all

all:
	g++ -I $(INC_H) $(SRC) main.cc -o $(call FixPath,$(PROJ_NAME).$(EXEC)) -lm
	./$(call FixPath,$(PROJ_NAME).$(EXEC))
	
run:
	./$(call FixPath,$(PROJ_NAME).$(EXEC))
test:
	g++ $(TEST) $(SRC) -I $(INC_H) -o $(call FixPath,$(PROJ_NAME).$(EXEC)) -lgtest -lgtest_main -lpthread
	./$(call FixPath,$(PROJ_NAME).$(EXEC))

coverage:
	
	g++ -fprofile-arcs -ftest-coverage  -I $(INC_H) main.cc $(SRC) -o $(call FixPath, $(TEST_PROJ_NAME).$(EXEC)) -lm
	$(call FixPath, ./$(TEST_PROJ_NAME).$(EXEC))
	gcov -a $(COV_SRC)
	$(RM) *.$(EXEC)
	$(RM) *.gcda
	$(RM) *.gcno
	$(RM) *.c.gcov
	$(RM) *.DAT
	
	
	


cppcheck:
	cppcheck --enable=all $(SRC) main.cc
debug:
	g++ -I $(INC_H) $(SRC) main.cc -g -o $(PROJ_NAME).$(EXEC) -lm
	gdb $(PROJ_NAME).$(EXEC)

valgrind:
	valgrind ./$(TEST_PROJ_NAME).$(EXEC)


clean:
	$(RM) *.DAT
	$(RM) *.$(EXEC)
	$(RM) *.gcda
	$(RM) *.gcno
	$(RM) *.c.gcov
