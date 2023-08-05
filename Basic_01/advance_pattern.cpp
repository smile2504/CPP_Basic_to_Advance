#include <iostream>
using namespace std;

int main(){

// 1.      1
//        121
//       12321
//      1234321
//     123454321  

    // int n;
    // cin>> n;
    // for(int i = 1; i<=n; i++){
    //     int value =1;
    //     for(int j = 1; j<=n; j++){
    //         if(j <= n-i){ //printing space
    //             cout<<" ";
    //         }
    //         else{
    //             cout<<value; //printing first half 
    //             value++;
    //         }
    //     }
    //     //Printing second half
    //     for (int k = 1 ; k <= i-1; k++)
    // {
    //     cout<< i-k; 
    // }
    //     cout<<endl;
    // }

    // 2. 
    // 1234554321
    // 1234**4321
    // 123****321
    // 12******21
    // 1********1

    int n;
    cin>> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if(j <= n -i +1){
                cout<< j;
            }
            else
            {
                cout<<"*";
            }
            
        }
        for (int k = 1; k <=n; k++)
        {
            if (k <= i-1)
            {
                cout<<"*";
            }
            else{
                cout<< n-k+1;
            }
            
        }
        
        cout<<endl;
        
    }
    
    
    
}