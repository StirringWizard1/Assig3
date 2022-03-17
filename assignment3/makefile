all:run 

run: main.o Computer.o Avalanche.o  RandomComputer.o Human.o Referee.o Player.o Bureaucrat.o Toolbox.o FistfullODollars.o Crescendo.o PaperDoll.o Tournament.o
	g++ -std=c++11 -o run -O2 -Wall main.cpp Computer.cpp Avalanche.cpp RandomComputer.cpp Crescendo.cpp Human.cpp FistfullODollars.cpp PaperDoll.cpp Tournament.cpp Referee.cpp Player.cpp Bureaucrat.cpp Toolbox.cpp	

	Player.o: Player.cpp
	g++ -c Player.cpp

Human.o: Player.o Human.cpp
	g++ -c Human.cpp Player.cpp

main.o: main.cpp
	g++ -c main.cpp

Computer.o: Player.o Computer.cpp
	g++ -c Computer.cpp Player.cpp

RandomComputer.o: Player.o Computer.o RandomComputer.cpp
	g++ -c Player.cpp Computer.cpp RandomComputer.cpp

Avalanche.o: Player.o Computer.o Avalanche.cpp
	g++ -c Computer.cpp Avalanche.cpp Player.cpp

Bureaucrat.o: Player.o Computer.o Bureaucrat.cpp
	g++ -c Player.cpp Computer.cpp Bureaucrat.cpp

Toolbox.o: Player.o Computer.o Toolbox.cpp
	g++ -c Player.cpp Computer.cpp Toolbox.cpp

Crescendo.o: Player.o Computer.o Crescendo.cpp
	g++ -c Player.cpp Computer.cpp Crescendo.cpp

PaperDoll.o: Player.o Computer.o PaperDoll.cpp
	g++ -c Player.cpp Computer.cpp PaperDoll.cpp

FistfullODollars.o: Player.o Computer.o FistfullODollars.cpp
	g++ -c Player.cpp Computer.cpp FistfullODollars.cpp

Referee.o: Referee.cpp
	g++ -c Referee.cpp

Tournament.o: Tournament.cpp
	g++ -c Tournament.cpp
