CXX = g++
CXX_FLAGS = -std=c++20
LIBS = -lsfml-graphics -lsfml-system -lsfml-window -lpthread -lrt

TARGET = main
BUILD = build
SRC = sourceCode/SortingAlgorithmVisualization

HEADER = $(SRC)/header
ALGO = $(SRC)/Algorithms

$(TARGET): $(SRC)/src/main.cpp \
       Applications.o ArrayManager.o BarManager.o ExecuteManager.o InputManager.o SortingAlgorithmManager.o WindowManager.o \
       BubbleSort.o HoareQuickSort.o MergeSort.o FisherYates.o InsertionSort.o SelectionSort.o
	$(CXX) $(CXX_FLAGS) $^ -o $@ -I $(ALGO) -I $(HEADER) $(LIBS)
	mkdir -p $(BUILD)
	mv *.o $(BUILD)
	mv $@ $(BUILD)

Applications.o: $(HEADER)/Implements/Applications.cpp
	$(CXX) $(CXX_FLAGS) -c $^ -o $@ -I $(ALGO) -I $(HEADER) $(LIBS)

ArrayManager.o: $(HEADER)/Implements/ArrayManager.cpp
	$(CXX) $(CXX_FLAGS) -c $^ -o $@ -I $(ALGO) -I $(HEADER) $(LIBS)

BarManager.o: $(HEADER)/Implements/BarManager.cpp
	$(CXX) $(CXX_FLAGS) -c $^ -o $@ -I $(ALGO) -I $(HEADER) $(LIBS)

ExecuteManager.o: $(HEADER)/Implements/ExecuteManager.cpp
	$(CXX) $(CXX_FLAGS) -c $^ -o $@ -I $(ALGO) -I $(HEADER) $(LIBS)

InputManager.o: $(HEADER)/Implements/InputManager.cpp
	$(CXX) $(CXX_FLAGS) -c $^ -o $@ -I $(ALGO) -I $(HEADER) $(LIBS)

SortingAlgorithmManager.o: $(HEADER)/Implements/SortingAlgorithmManager.cpp
	$(CXX) $(CXX_FLAGS) -c $^ -o $@ -I $(ALGO) -I $(HEADER) $(LIBS)

WindowManager.o: $(HEADER)/Implements/WindowManager.cpp
	$(CXX) $(CXX_FLAGS) -c $^ -o $@ -I $(ALGO) -I $(HEADER) $(LIBS)

BubbleSort.o: $(ALGO)/Implements/BubbleSort.cpp
	$(CXX) $(CXX_FLAGS) -c $^ -o $@ -I $(ALGO) -I $(HEADER) $(LIBS)

HoareQuickSort.o: $(ALGO)/Implements/HoareQuickSort.cpp
	$(CXX) $(CXX_FLAGS) -c $^ -o $@ -I $(ALGO) -I $(HEADER) $(LIBS)

MergeSort.o: $(ALGO)/Implements/MergeSort.cpp
	$(CXX) $(CXX_FLAGS) -c $^ -o $@ -I $(ALGO) -I $(HEADER) $(LIBS)

FisherYates.o: $(ALGO)/Implements/FisherYates.cpp
	$(CXX) $(CXX_FLAGS) -c $^ -o $@ -I $(ALGO) -I $(HEADER) $(LIBS)

InsertionSort.o: $(ALGO)/Implements/InsertionSort.cpp
	$(CXX) $(CXX_FLAGS) -c $^ -o $@ -I $(ALGO) -I $(HEADER) $(LIBS)

SelectionSort.o: $(ALGO)/Implements/SelectionSort.cpp
	$(CXX) $(CXX_FLAGS) -c $^ -o $@ -I $(ALGO) -I $(HEADER) $(LIBS)

clean:
	rm -rf $(BUILD)
	rm -rf *.o
	rm -rf $(TARGET)
