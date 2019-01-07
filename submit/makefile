# File: 	makefile
# Author: 	Sandro Aguilar
# Date: 	January 2019
# Description:	Makefile for Lab 2 Count Frequencies

# Variables to control Makefile operation

CXX = g++

CXXFLAGS = -Wall
CXXFLAGS += -g
CXXFLAGS += -std=c++0x

OBJECTS = main.o
OBJECTS += count_letters.o
OBJECTS += output_letters.o

HPPs = count_letters.hpp
HPPs += output_letters.hpp

CPPs = main.cpp
CPPs += count_letters.cpp
CPPs += output_letters.cpp

# Targets needed to bring the executable up to date

lab2: $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o lab2 $(OBJECTS)

main.o: main.cpp $(HPPs)
	$(CXX) $(CXXFLAGS) -c main.cpp

count_letters.o: count_letters.hpp

output_letters.o: output_letters.hpp

# Clean-up operations
clean:
	rm lab2 *.o

debug:
	valgrind -v --leak-check=full --show-leak-kinds=all --track-origins=yes ./lab2

zip:
	zip -D Lab2_Aguilar_Sandro.zip $(CPPs) $(HPPs) $(TXTS) makefile *.txt