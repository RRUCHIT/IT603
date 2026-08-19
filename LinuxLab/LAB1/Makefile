CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17

OBJS = Calculator.o main.o

TARGET = calculator

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(TARGET)

Calculator.o: Calculator.cpp Calculator.h
	$(CXX) $(CXXFLAGS) -c Calculator.cpp -o Calculator.o

main.o: main.cpp Calculator.h
	$(CXX) $(CXXFLAGS) -c main.cpp -o main.o

clean:
	rm -f $(OBJS) $(TARGET)