all: main.o Evento.o GestorDeEventos.o
	g++ -std=c++14 main.o Evento.o GestorDeEventos.o -o main

main.o: main.cpp Evento.h GestorDeEventos.h
	g++ -std=c++14 -c main.cpp

Evento.o: Evento.cpp Evento.h
	g++ -std=c++14 -c Evento.cpp

GestorDeEventos.o: GestorDeEventos.cpp GestorDeEventos.h Evento.h
	g++ -std=c++14  -c GestorDeEventos.cpp

