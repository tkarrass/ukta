.PHONY: all clean

all: ukta

clean:
	rm -f ./ukta

ukta: src/Ukta*.cpp src/Ukta.h
	g++ -lSDL -lGL -o ukta src/Ukta*.cpp

