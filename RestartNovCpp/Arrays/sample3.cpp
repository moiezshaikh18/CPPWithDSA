
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void printArray(int arr[] ,int size){
    cout << "Array elements are: ";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " "; // Print each element of the array
    }
    cout << endl; // End line after printing all elements
}



bool areFrequenciesUnique(int array[],int size ){
    
     int count[201]={0};
    int freq[201]={0};
    
    for(int i = 0;i<size;i++){
        int mappedIndex = array[i] + 100;
        count[mappedIndex] = count[mappedIndex] + 1; // 0 = 0 + 1; 1 = 1 + 1 = 2,;
    }
    
    
    for(int i = 0; i <201;i++){
        if(count[i] > 0){ // count[101] ==> 1 ,2;
            if(freq[count[i]] > 0){ // freq[1] ==> value is 0
                return false;
            }
            
            freq[count[i]] = freq[count[i]] +1; // 0  = 0 +1;
        }
    }
    
    return true;
}



int main() {
    int size;
    cout << "Enter the size of array" << endl;
    cin>>size;
    
    int array[100]; // Array with a maximum size of 100
   
    
    cout << "Enter the " << size << " elements:" << endl;
    
    for(int i = 0; i < size; i++) {
        cin>> array[i]; // Input elements of the array
    }
    
    
 if (areFrequenciesUnique(array, size)) {
        cout << "All frequencies are unique!" << endl;
    } else {
        cout << "Frequencies are not unique!" << endl;
    }    
    
    
    printArray(array, size);

    return 0;
}