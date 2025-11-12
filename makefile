tp3ct.out : main.o chargesauve.o outils.o
	g++ -o tp3ct.out main.o chargesauve.o outils.o

main.o : main.cpp includes/chargesauve.h includes/outils.h
	g++ -c main.cpp -Iincludes

chargesauve.o : src/chargesauve.cpp includes/chargesauve.h
	g++ -c src/chargesauve.cpp -Iincludes

outils.o : src/outils.cpp includes/outils.h
	g++ -c src/outils.cpp -Iincludes

clean :
	rm -f *.o tp3ct.out

