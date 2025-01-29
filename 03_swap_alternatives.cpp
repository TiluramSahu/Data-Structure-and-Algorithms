#include <iostream>
using namespace std;

// Function to swap alternate elements in the array
void swapAlternte(int arr[], int size){
    for(int i=0; i<size; i+=2){ // Increment by 2 to get alternate elements
        if(i+1<size){ // Check to ensure the next element exists
            swap(arr[i], arr[i+1]); // Swap the current element with the next one
        }
    }
}

// Function to print the elements of the array
void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int even[8] = {5,2,9,4,7,6,1,0}; // Array with even number of elements
    int odd[5] = {11,33,9,76,43}; // Array with odd number of elements

    swapAlternte(even, 8); // Swap alternate elements in the even array
    printArray(even,8); // Print the modified even array
    cout<<endl;
    swapAlternte(odd, 5); // Swap alternate elements in the odd array
    printArray(odd, 5); // Print the modified odd array

    return 0;
}