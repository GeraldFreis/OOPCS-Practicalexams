tests: testall

testall: programout
	./programout

programout: player.o person.o computer.o main-3-1.cpp
	g++ player.o person.o computer.o main-3-1.cpp -o programout

person.o: Person.h Person.cpp player.o
	g++ -c Person.cpp

computer.o: Computer.h Computer.cpp
	g++ -c Computer.cpp

player.o: Player.h Player.cpp
	g++ -c Player.cpp



