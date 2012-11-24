.PHONY: all clean

all: ukta

clean:
	rm -f ./ukta

ukta: src/*.cpp src/*.h
	g++ -lSDL -lGL -o ukta src/*.cpp

