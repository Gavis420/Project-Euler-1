# Problem 1
problem001: problem001/euler1

problem001/euler1: problem001/euler1.cpp
	g++ -std=c++2a -o problem001/euler1 problem001/euler1.cpp

run_problem001: problem001
	./problem001/euler1

# Clean up all compiled files
clean:
	rm -f problem001/euler1
