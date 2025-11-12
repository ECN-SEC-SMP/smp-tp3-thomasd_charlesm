tp3ct.out: main.o chargesauve.o	outils.o

chargesauve.o : chargesauve.cpp
	g++ -c chargesauve.cpp

outils.o : outils.cpp
	g++	-c outils.cpp

