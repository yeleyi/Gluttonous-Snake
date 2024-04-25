FLAGS = -pedantic-errors -std=c++11

map.o: map.cpp map.h
        g++ -c map.cpp

player.o: player.cpp player.h
        g++ -c player.cpp

movePlayer.o: movePlayer.cpp movePlayer.h
        g++ -c movePlayer.cpp

randomBeam.o: randomBeam.cpp randomBeam.h
        g++ -c randomBeam.cpp

renderMap.o: renderMap.cpp renderMap.h
        g++ -c renderMap.cpp

main.o: main.cpp map.h player.h movePlayer.h randomBeam.h renderMap.h
        g++ -c main.cpp

main: map.o player.o movePlayer.o randomBeam.o renderMap.o main.o
        g++ map.o player.o movePlayer.o randomBeam.o renderMap.o main.o -o main -lncurses

clean:
        rm -f main main.o map.o player.o movePlayer.o randomBeam.o renderMap.o main.tgz

tar:
        tar -czvf main.tgz *.cpp *.h

.PHONY: clean tar
