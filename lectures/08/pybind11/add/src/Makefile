all: add.cpp
	g++ -O3 -Wall -shared -std=c++11 -fPIC \
		$(shell python3 -m pybind11 --includes) \
		$< -o example$(shell python3-config --extension-suffix)

clean:
	rm -f example.cpython*
