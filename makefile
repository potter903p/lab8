Lab7: tetris.cpp genMino.o Mino.cpp MinoS.cpp MinoI.cpp MinoL.cpp MinoO.cpp MinoZ.cpp
	g++ -o Lab7 tetris.cpp genMino.o Mino.cpp MinoS.cpp MinoI.cpp MinoL.cpp MinoO.cpp MinoZ.cpp

genMino.o: genMino.cpp genMino.h
	g++ -c genMino.cpp  
