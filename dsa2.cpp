#include <iostream>
#include <limits.h>
using namespace std;

int findmax(int arr[], int size, int &maxi, int index) {
    // Base case: if index is out of bounds, return the maximum found so far
    if (index >= size) {
        return maxi;
    }

    // Processing: Update maxi with the smaller of current maxi or current element
    maxi = max(maxi, arr[index]);

    // Recursive call to check the next element
    return findmax(arr, size, maxi, index + 1);
}

int main() {
    // Array and size
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;  // Corrected size to include all elements
    int index = 0;
    int maxi = INT_MIN;

    // Call the recursive function
 maxi = findmax(arr, size, maxi, index);

    // Output the result
    
cout<< maxi<< endl;
    return 0;
}
