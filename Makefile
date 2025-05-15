output: cliente.o conta_bancaria.o main.o
	g++ cliente.o conta_bancaria.o main.o -o output
	
cliente.o: cliente.h cliente.cpp
	g++ -c cliente.cpp

conta_bancaria.o: conta_bancaria.h conta_bancaria.cpp
	g++ -c conta_bancaria.cppma

main.o: main.cpp cliente.h conta_bancaria.h
	g++ -c main.cpp

clean:
	rm *.o output

