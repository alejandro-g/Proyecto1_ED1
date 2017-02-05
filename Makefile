main: main.o Persona.o Object.o Employee.o ADTList.o VSArrayList.o
	g++ main.o Persona.o Object.o Employee.o ADTList.o VSArrayList.o -o main

main.o: main.cpp Persona.h Object.h Employee.h ADTList.h VSArrayList.h
	g++ -c main.cpp

Persona.o: Persona.h Persona.cpp Object.h Object.cpp
	g++ -c Persona.cpp

Object.o: Object.h Object.cpp
	g++ -c Object.cpp

Employee.o: Employee.h Employee.cpp Persona.h Persona.cpp Object.h Object.cpp
	g++ -c Employee.cpp

ADTList.o: ADTList.h ADTList.cpp Object.h Object.cpp
	g++ -c ADTList.cpp

VSArrayList.o: ADTList.h ADTList.cpp Object.h Object.cpp Persona.h Persona.cpp
	g++ -c VSArrayList.cpp 

clean:
	rm -f *.o main
