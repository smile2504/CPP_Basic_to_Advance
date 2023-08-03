#include <iostream>
using namespace std;

int main(){

    //***** Conditional Statement*/

    // int x, y, z;
    // cin>> x >> y >>z;
    // if (x>y && x>z)
    // {
    //     cout<< x;
    // }
    // else if (y>x && y>z)
    // {
    //     cout<< y;
    // }
    // else
    // {
    //     cout<< z;
    // }
                                //or//
    // int l, m, n;                            
    // int ans = max(l, max(m, n));
    // cout << ans << endl;


    // int a;
    // cin>>a;
    // if (a>0)
    // {
    //     cout<< a << " is Positive number";
    // }
    // else if (a<0)
    // {
    //     cout<< a << " is negative number";
    // }
    // else
    // {
    //     cout<< a << " is zero";
    // }


    // char ch;
    // cin>> ch;
    // if (ch >= 'a' && ch <= 'z')
    // {
    //     cout<< ch << " is lower case";
    // }
    // else if (ch >= 'A' && ch <= 'Z')
    // {
    //     cout<< ch << " is upper case";
    // }
    // else if(ch >= '0' && ch <= '9')
    // {
    //     cout<< ch << " is numeric";
    // }
    // else
    // {
    //     cout<< ch << " is symbol";
    // }
    


    //******* Loop*/
    //While loop to find the sum of all number from 0 to n
    // int i=1, n;
    // int sum = 0;
    // cin>>n;
    // while(i<=n)
    // {
    //     sum = sum + i;
        
    //     i++;
    // }
    // cout<<sum <<endl;


    //While loop to find the sum of even number from 0 to n
    // int i = 0, n;
    // cin>>n;
    // int sum = 0;
    // while (i<=n)
    // {
    //     if (i%2 == 0)
    //     {
    //         sum = sum + i;
    //     }
    //     i++;
    // }
    // cout<<sum;

    // int i= 2, p;
    // cout<<"Enter a number: ";
    // cin>>p;
    // while (i<p)
    // {
    //     if (p%i == 0)
    //     {
    //         cout<< p << " is not Prime number";
    //         break;
    //     }
    //     else
    //     {
    //         cout<< p << " is Prime number";
    //         break;
    //     }
        
    //     i++;
        
    // }


    
    //******Pattern Printing*/

    //1. * * * * *
    //   * * * * *
    //   * * * * *
    //   * * * * *
    //   * * * * *

    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 0; j < 5; j++)
    //     {
    //         cout<<" * ";
    //     }
    //     cout<<endl;
        
    // }


    //2. 1 1 1 1 1
    //   2 2 2 2 2
    //   3 3 3 3 3
    //   4 4 4 4 4
    //   5 5 5 5 5

    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int j = 1; j <= 5; j++)
    //     {
    //         cout<<" "<< i <<" ";
    //     }
    //     cout<<endl;
        
    // }

    //3. 1 2 3 4 5
    //   1 2 3 4 5
    //   1 2 3 4 5
    //   1 2 3 4 5
    //   1 2 3 4 5

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cout<<" "<< j <<" ";
        }
        cout<<endl;
        
    }
    

    //. *
    //   * *
    //   * * *
    //   * * * * 
    //   * * * * *

    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 0; j <= i; j++)
    //     {
    //         cout<<" * ";
    //     }
    //     cout<<endl;
        
    // }

    

}