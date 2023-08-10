// // Printing Array using Function

// #include<iostream>
// using namespace std;
// void printingArray(){
//     int n;
//     cout<<"Enter the size of Array 1: ";
//     cin>>n;
//     cout<<"Enter the elements of Array 1: ";
//     int arr1[n];
//     for(int i = 0; i < n; i++){
//         cin>> arr1[i];
//     }
    
//     int m;
//     cout<<"Enter the size of Array 2: ";
//     cin>>m;
//     cout<<"Enter the elements of Array 2: ";
//     int arr2[m];
//     for(int i = 0; i < m; i++){
//         cin>> arr2[i];
//     }
    
//     cout<<"Array 1: [ ";
//     for(int i = 0; i < n; i++){
//         cout<< arr1[i]<<" ";
//     }
//     cout<<"]"<<endl;
    
//     cout<<"Array 2: [ ";
//     for(int i = 0; i < m; i++){
//         cout<< arr2[i]<<" ";
//     }
//     cout<<"]"<<endl;
    
// }
// int main(){
//   printingArray();
// }

//________________________________________________________________________________________________


// // Finding Maximum and Minimum of array using Function

// #include<iostream>
// using namespace std;

// int getMax(int arr[], int size){
    
//     int max = arr[0];
//     for(int i = 0; i < size; i++){
//         if(arr[i]>= max){
//             max = arr[i];
//         }
//     }
//     return max;
// }

// int getMin(int arr[], int size){
    
//     int min = arr[0];
//     for(int i = 0; i < size; i++){
//         if(arr[i]<= min){
//             min = arr[i];
//         }
//     }
//     return min;
// }

// int main(){
//     int size;
//     cin>> size;
//     int arr[100];
//     for(int i = 0; i < size; i++){
//         cin>> arr[i];
//     }
//     cout<<endl;
    
//     cout<<"Maximum is : "<<getMax(arr, size)<<endl;
//     cout<<"Minimum is : "<<getMin(arr, size)<<endl;
    
//     int n;
//     cin>> n;
//     int arr1[100];
//     for(int i = 0; i < n; i++){
//         cin>> arr1[i];
//     }
//     cout<<endl;
    
//     cout<<"Maximum is : "<<getMax(arr1, n)<<endl;
//     cout<<"Minimum is : "<<getMin(arr1, n)<<endl;
    
// }




//                             'or'





// Finding Maximum and Minimum of array using Function with another technique

// #include<iostream>
// using namespace std;

// int getMax(int arr[], int size){
    
//     int maxi = arr[0];
//     for(int i = 0; i < size; i++){
//         maxi = max(maxi, arr[i]);
//     }
//     return maxi;
// }

// int getMin(int arr[], int size){
    
//     int mini = arr[0];
//     for(int i = 0; i < size; i++){
//         mini = min(mini, arr[i]);
//     }
//     return mini;
// }

// int main(){
//     int size;
//     cin>> size;
//     int arr[100];
//     for(int i = 0; i < size; i++){
//         cin>> arr[i];
//     }
//     cout<<endl;
    
//     cout<<"Maximum is : "<<getMax(arr, size)<<endl;
//     cout<<"Minimum is : "<<getMin(arr, size)<<endl;
    
//     int n;
//     cin>> n;
//     int arr1[100];
//     for(int i = 0; i < n; i++){
//         cin>> arr1[i];
//     }
//     cout<<endl;
    
//     cout<<"Maximum is : "<<getMax(arr1, n)<<endl;
//     cout<<"Minimum is : "<<getMin(arr1, n)<<endl;
    
// }

//________________________________________________________________________________________________


// Sum of elements of array


// #include<iostream>
// using namespace std;

// int sumArray(int arr[], int size){
//     int sum = 0;
//     for(int i = 0; i < size; i++){
//         sum = sum + arr[i];
//     }
//     return sum;
// }

// int main(){
//     int arr1[100], n;
//     cin>> n;
//     for(int i = 0; i < n; i++){
//         cin>> arr1[i];
//     }
    
//     cout<< "Sum : " << sumArray(arr1, n) <<endl;
// }


// //________________________________________________________________________________________________

// Linear Search in Array using function

// #include<iostream>
// using namespace std;

// bool search(int arr[], int size, int key){
//     for(int i = 0; i < size; i++){
//         if(arr[i] == key){
//             return 1;
//         }
//     }
//     return 0;
// }

// int main(){
//     int arr[10] = {2, 7, 6, 9, 3, -9, 4, 1, -5, 5};
//     cout<< "Enter the value for search: "<<endl;
//     int key;
//     cin>>key;
//     bool found = search(arr, 10, key);
//     if(found){
//         cout<< "Element is present ";
//     }
//     else{
//         cout<< "Element is not present ";
//     }
// }


// __________________________________________________________________________________________________


// Print the array in reverse order

// #include <iostream>

// using namespace std;

// int main()
// {
//     int arr[10],size;
//     cin>> size;
//     for(int i = 0; i < size; i++){
//         cin>> arr[i];
//     }
//     for(int i = size-1; i >= 0; i--){
//         cout<< arr[i] << " ";
//     }
// }



// __________________________________________________________________________________________________

//Reverse the Array

#include<iostream>
using namespace std;
void reverseArray(int arr[], int size){
    int start = 0;
    int end = size-1;
    while(start <= end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout<< arr[i]<< " ";
    }
}

int main(){
    int arr1[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    reverseArray(arr1, 10);
    printArray(arr1, 10);
}




