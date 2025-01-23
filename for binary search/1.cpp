#include <iostream>
#include <limits.h>
using namespace std;

int binarysearch(int arr[], int s ,int e , int target){
    //base case 
    if (s>e){
        return -1;

    }
    //processing
    int mid = s+(e-s)/2;
    if (arr[mid]==target){
        return mid;

    }
    // baaki reursion sambhal lega 
    if (arr[mid]< target){
        
        return binarysearch(arr, mid+1,e,target);
        

    }
else{
   
    return binarysearch(arr, s,mid-1,target);
        
}


}
int main() {
    // Array and size
    int arr[]= {10,20,30,40,50,60,70,80};
    int size = 8;
    int start = 0;
    int end = size-1;
    int target = 80;
    // bool function for ha ki naaa
    bool found = binarysearch(arr, start,end,target);
    if (found){
        cout<<"found target"<< endl;
    }
    else{
        cout<< "not found you are chutiya "<< endl;
        
    } 
}
