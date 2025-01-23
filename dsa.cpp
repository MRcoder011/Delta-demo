#include <iostream>
using namespace std;
 //void createArray(int *arr , int size, int index){
    //base case
    //if (index >= size ){
//        return;

    //}
    //createArray(arr, size , index+1);
   // cout<< arr[ index ]<< " ";

 //}
 #include <iostream>
using namespace std;
#include <vector>

int  search(int *arr, int size, int index, int target, vector<int> &ans) {
    // Base case: if index is out of bounds, target is not found
    if (index >= size) {
        return - ;
    }

    // Check if the current element matches the target
    if (arr[index] == target) {
        ans.push_back(index)
    }

    // Recursive call to check the rest of the array
    return search(arr, size, index + 1, target, ans);
}

int main() {
    // Array and size
    int arr[] = {10, 10, 30, 10, 50};
    int size = 5;  // Corrected size to include all elements
    int index = 0;
    int target = 10;
    int ans =0
int result = search(arr, size, index, target);
    // Call the search function and print the result
    if (search(arr, size, index, target)) {
        cout << "Target found!"<< result  << endl;
    } else {
        cout << "Target not found!"<< -1 << endl;
    }

    return 0;
}
