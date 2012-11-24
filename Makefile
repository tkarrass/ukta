.PHONY: all clean

all: ukta

clean:
	rm -f ./ukta

ukta: src/ukta*.cpp src/ukta.h
	g++ -lSDL -lGL -o ukta src/ukta*.cpp

