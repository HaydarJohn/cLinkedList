debug:
	g++ *.cpp -o program -g

realese:
	g++ *.cpp -o program -s

clean:
	rm program
run:
	./program