src_dir := src/
chapter := chapter10
h_dir := $(src_dir)$(chapter)/
h_file := $(h_dir)$(chapter).h
exc := exc10_1
src_file := $(h_dir)$(exc).cpp
cpp := g++

Thinking_in_CPP: main $(exc)

main: $(src_dir)main.o $(h_file)
	cpp $(src_dir)main.cpp -o $(src_dir)main.o

$(exc): $(h_dir)$(exc).o $(h_file)
	cpp $(h_dir)$(exc).cpp -o $(h_dir)$(exc).o
