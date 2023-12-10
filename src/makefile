CC = g++

IDIR = /opt/homebrew/Cellar/sfml/2.6.1/include
CFLAGS = -Wall -g -I$(IDIR) 

LDIR = /opt/homebrew/Cellar/sfml/2.6.1/lib
LFLAGS = -lsfml-graphics -lsfml-window -lsfml-system
CFLAGS2 = -L$(LDIR) $(LFLAGS)

main: main.cpp
	$(CC) main.cpp $(CFLAGS) -o main.o $(CFLAGS2)
