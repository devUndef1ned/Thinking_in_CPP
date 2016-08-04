exc := exc10_3
chapter := chapter10
dirs := ./src ./src/$(chapter)
src_file := $(exc).cpp
h_file := $(chapter).h
cc := g++
VPATH = $(dirs)

Thinking_in_CPP: main.o $(exc).o
	$(cc) -o Thinking_in_CPP $^

main.o: main.cpp $(h_file)
	$(cc) -c $< -o $@

$(exc).o: $(exc).cpp $(h_file)
	$(cc) -c $< -o $@

clean:
	rm -r *.o
	rm Thinking_in_CPP
