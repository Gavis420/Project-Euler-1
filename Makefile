# Problem 1
problem001: problem001/main

problem001/main: problem001/main.cpp
	g++ -std=c++2a -o problem001/main problem001/main.cpp

run_problem001: problem001
	./problem001/main

# Clean up all compiled files
clean:
	rm -f problem001/main
