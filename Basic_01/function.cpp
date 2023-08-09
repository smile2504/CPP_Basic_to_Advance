//GCD using function

// #include<iostream>
// using namespace std;
// int gcd(){
//     int a, b;
//     int result;
//     cin>>a;
//     cin>>b;
//     if(a<b){
//         result = a;
//     } else{
//         result = b;
//     }
    
//     while(result > 0){
//         if(a % result == 0 && b % result ==0){
//             break;
//         }
//         result--;
//     }
//     return result;
    
// }

// int main(){
//     int ans = gcd();
//     cout<< "GCD is: " << ans<<endl;
//     // return 0;
// }


// Power finding (a^b) using function

// #include<iostream>
// using namespace std;
// int power(){
//     int a, b;
//     cin>>a;
//     cin>>b;
//     int pow = 1;
//     for(int i =1; i<=b; i++){
//         pow = pow*a;
//     }
//     return pow;
// }

// int main(){
//     cout<<power()<<endl;
//     cout<<power()<<endl;
//     cout<<power()<<endl;
//     return 0;
// }


//nCr using function

// #include<iostream>
// using namespace std;

// int fact(int n){
//     int fact = 1;
//     for(int i = 2; i<=n; i++){
//         fact = fact * i;
//     }
//     return fact;
// }


// int nCr(int n, int r){
//     int num = fact(n);    
//     int dem = fact(r) * fact(n-r); 
//     return num/dem;  
// }


// int main(){
//     int a, b;
//     cin>>a >>b;
//     cout<< nCr(a, b)<<endl;
// }


// Print counting using the function which doesn't return any value

#include<iostream>
using namespace std;

void counting(int n){
    for(int i = 1; i <= n; i++){
        cout<< i << " ";
    }
    cout<<endl;
}
int main(){
    int a;
    cin>>a;
    counting(a);
    return 0;
}
