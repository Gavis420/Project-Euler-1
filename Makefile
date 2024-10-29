euler1: euler1.cpp
	g++ -o euler1 euler1.cpp

run: euler1
	./euler1

clean:
	rm -f euler1
