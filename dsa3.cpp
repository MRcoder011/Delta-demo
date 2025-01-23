#include <iostream>
#include <vector>
using namespace std;

void solve(int arr[], int size, int index, vector<int>& ans) {
    // Base case: stop recursion when the index is out of bounds
    if (index >= size) {
        return;
    }

    // Check if the current element is even and add it to the result vector
    if (arr[index] ) {
        ans.push_back(arr[index]*2);
    }

    // Recursive call to check the next element
    solve(arr, size, index + 1, ans);
}

int main() {
    // Array and size
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;  // Corrected size to include all elements
    int index = 0;

    vector<int> ans;

    // Call the recursive function
    solve(arr, size, index, ans);

    // Print the result
    cout << "Even numbers in the array: ";
    for (int num : ans) {
        cout << num << " ";
    }

    return 0;
}
  