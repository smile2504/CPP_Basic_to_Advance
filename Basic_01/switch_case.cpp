// #include<iostream>
// using namespace std;
// int main(){
//     int month;
//     cout<< "Enter the number for month"<<endl;
//     cin>> month;
//     switch(month){ //the value inside switch can be character or integer.
//         case 1: 
//         cout<< "january";
//         break;
        
//         case 2:
//         cout<< "February";
//         break;
        
//         case 3:
//         cout<< "march";
//         break;
        
//         case 4:
//         cout<< "April";
//         break;
        
//         case 5:
//         cout<< "May";
//         break;
        
//         case 6:
//         cout<< "June";
//         break;
        
//         case 7:
//         cout<< "July";
//         break;
        
//         case 8:
//         cout<< "August";
//         break;
        
//         case 9:
//         cout<< "September";
//         break;
        
//         case 10:
//         cout<< "October";
//         break;
        
//         case 11:
//         cout<< "November";
//         break;
        
//         case 12:
//         cout<< "December";
//         break;
        
//         default:
//         cout<< "Not valid month";
        
//     }
// }



//Calculator program

// #include<iostream>
// using namespace std;
// int main(){
    
//     int num1, num2, result, rem;
//     char operation;
//     cout<< "Enter number one: "<<endl;
//     cin>> num1;
//     cout<< "Enter number two: "<<endl;
//     cin>> num2;
//     cout<<"Enter the operation symbol i.e - + or - or * or / : "<<endl;
//     cin>> operation;
    
//     switch(operation){
//         case '+':
//         result = num1 + num2;
//         cout<< "Sum: " << result;
//         break;
        
//         case '-':
//         result = num1 - num2;
//         cout<< "Difference: " << result;
//         break;
        
//         case '*':
//         result = num1 * num2;
//         cout<< "Product: "<< result;
//         break;
        
//         case '/':
//         result = num1 / num2;
//         rem = num1 % num2;
//         cout<< "Quotient: "<< result <<endl;
//         cout<< "Remainder: "<< rem <<endl; 
//         break;
        
//         default:
//         cout<< "Invalid operation symbol";
        
//     }
// }



#include<iostream>
using namespace std;
int main(){
    int amount;
    cout<< "Enter the amount: ";
    cin>> amount;
    
    switch(1){
        case 1:
        cout<< "500 ka note: " <<amount/500<<endl;
        amount = amount%500;
        
        case 2:
        cout<< "200 ka note: " <<amount/200<<endl;
        amount = amount%200;
        
        case 3:
        cout<< "100 ka note: " <<amount/100<<endl;
        amount = amount%100;
        
        case 4:
        cout<< "50 ka note: " <<amount/50<<endl;
        amount = amount%50;
        
        case 5:
        cout<< "20 ka note: " <<amount/20<<endl;
        amount = amount%20;
        
        case 6:
        cout<< "10 ka note: " <<amount/100<<endl;
        amount = amount%10;
        
        case 7:
        cout<< "5 ka sikka: " <<amount/5<<endl;
        amount = amount%5;
        
        case 8:
        cout<< "2 ka sikka: " <<amount/2<<endl;
        amount = amount%2;
        
        case 9:
        cout<< "1 ka sikka: " <<amount/1<<endl;
        amount = amount%1;
        
        
    }
}