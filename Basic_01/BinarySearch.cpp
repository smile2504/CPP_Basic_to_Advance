// Binary search in array

#include<iostream>
using namespace std;
int binarySearch(int arr[], int n, int key){
    int start = 0;
    int end = n-1;
    int mid =  (start + end)/2;  // start + (end - start)/2 = It will protect us from integer overflow
    
   while(start <= end){
       if(key == arr[mid]){
           return mid;
       }
       else if(key > arr[mid]){\
           start = mid+1;
       }
       else{
           end = mid-1;
       }
       
       mid = (start + end)/2;  // start + (end - start)/2
   }
   return -1;
}

int main(){
    int arr[10] = {11, 52, 73, 74, 45, 86, 57, 88, 99, 60};
    int key;
    cin>> key;
    int position = binarySearch(arr, 10, key);
    cout<< "Value is present at index value "<< position;
}
    
    
    
