all:
	g++ -c main.cpp tgaimage.cpp -Wall -std=c++17 -g
	g++ -o tinyRenderer main.o tgaimage.o -g