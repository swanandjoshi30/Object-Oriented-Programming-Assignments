#include <iostream>

// Function template for selection sort
template <typename T>
void selectionSort(T arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        // Find the index of the minimum element in the unsorted part of the array
        int minIndex = i;

        for (int j = i + 1; j < size; ++j) {
            // Compare elements to find the minimum
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Swap the found minimum element with the element at index i
        std::swap(arr[i], arr[minIndex]);
    }
}

// Function template to print an array
template <typename T>
void printArray(const T arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    const int intSize = 5;
    int intArray[intSize] = {64, 25, 12, 22, 11};

    const int floatSize = 4;
    float floatArray[floatSize] = {5.5, 2.2, 1.1, 4.4};

    std::cout << "Welcome to the Selection Sort Program!\n\n";
    
    std::cout << "Original integer array: ";
    printArray(intArray, intSize);

    // Call selectionSort for integers
    selectionSort(intArray, intSize);

    std::cout << "Sorted integer array: ";
    printArray(intArray, intSize);

    std::cout << "\nOriginal float array: ";
    printArray(floatArray, floatSize);

    // Call selectionSort for floats
    selectionSort(floatArray, floatSize);

    std::cout << "Sorted float array: ";
    printArray(floatArray, floatSize);

    return 0;
}

