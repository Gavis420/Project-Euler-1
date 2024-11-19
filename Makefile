# Clean up all compiled files
clean:
	rm -f problem001/main problem002/main problem003/main problem004/main

# Problem 1
problem001: problem001/main

problem001/main: problem001/main.cpp
	g++ -std=c++2a -o problem001/main problem001/main.cpp

run_problem001: problem001
	./problem001/main

# Problem 2
problem002: problem002/main

problem002/main: problem002/main.cpp
	g++ -std=c++2a -o problem002/main problem002/main.cpp

run_problem002: problem002
	./problem002/main

# Problem 3
problem003: problem003/main

problem003/main: problem003/main.cpp
	g++ -std=c++2a -o problem003/main problem003/main.cpp

run_problem003: problem003
	./problem003/main

# Problem 4
problem004: problem004/main

problem004/main: problem004/main.cpp
	g++ -std=c++2a -o problem004/main problem004/main.cpp

run_problem004: problem004
	./problem004/main
