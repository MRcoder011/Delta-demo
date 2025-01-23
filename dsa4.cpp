#include <iostream>
#include <limits.h>
using namespace std;

bool checksorted(int arr[], int size, int index) {
    // Base case: if index reaches the size of the array, it means the array is sorted
    if (index >= size) {
        return true;
    }

    // Check if the current element is greater than the previous element
    if (arr[index] >= arr[index - 1]) {
        // Recursive call for the next index
        return checksorted(arr, size, index + 1);
    } else {
        // If any pair is unsorted, return false
        return false;
    }
}

int main() {
    // Array and size
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;  // Size of the array
    int index = 1; // Start from the second element to compare with the first

    // Check if the array is sorted
    bool issorted = checksorted(arr, size, index);

    if (issorted) {
        cout << "Array is sorted" << endl;
    } else {
        cout << "Array is not sorted" << endl;
    }

    return 0;
}
