main: main.cpp Quiz.cpp printResult.cpp
	g++ -Wall -o main.out main.cpp Quiz.cpp printResult.cpp

run: main
	./main.out database.txt

clean:
	rm main.out