#include<iostream>

template<typename T>
void selection_sort(T arr[], int size) {
    for(int i = 0; i < size - 1; ++i) {
        int minindex = i;
        for(int j = i + 1; j < size; ++j) {
            if(arr[j] < arr[minindex])
                minindex = j;
        }
        std::swap(arr[i], arr[minindex]);
    }
}

template<typename T>
void printArray(T arr[], int size) {
    for(int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int intsize;
    std::cout << "Enter the size of the integer array: ";
    std::cin >> intsize;

    int intArray[intsize];

    std::cout << "Enter " << intsize << " integers separated by spaces: ";
    for (int i = 0; i < intsize; ++i) {
        std::cin >> intArray[i];
    }

    int floatsize;
    std::cout << "Enter the size of the float array: ";
    std::cin >> floatsize;

    float floatArray[floatsize];

    std::cout << "Enter " << floatsize << " floats separated by spaces: ";
    for (int i = 0; i < floatsize; ++i) {
        std::cin >> floatArray[i];
    }

    std::cout << "\nOriginal integer array: ";
    printArray(intArray, intsize);

    // Call selectionSort for integers
    selection_sort(intArray, intsize);

    std::cout << "Sorted integer array: ";
    printArray(intArray, intsize);

    std::cout << "\nOriginal float array: ";
    printArray(floatArray, floatsize);

    // Call selectionSort for floats
    selection_sort(floatArray, floatsize);

    std::cout << "Sorted float array: ";
    printArray(floatArray, floatsize);

    return 0;
}

