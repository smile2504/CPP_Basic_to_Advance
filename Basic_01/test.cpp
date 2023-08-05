#include <iostream>
using namespace std;

int main()
{

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
    // or//
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
    // While loop to find the sum of all number from 0 to n
    // int i=1, n;
    // int sum = 0;
    // cin>>n;
    // while(i<=n)
    // {
    //     sum = sum + i;

    //     i++;
    // }
    // cout<<sum <<endl;

    // While loop to find the sum of even number from 0 to n
    //  int i = 0, n;
    //  cin>>n;
    //  int sum = 0;
    //  while (i<=n)
    //  {
    //      if (i%2 == 0)
    //      {
    //          sum = sum + i;
    //      }
    //      i++;
    //  }
    //  cout<<sum;

    int i= 2, p;
    cout<<"Enter a number: ";
    cin>>p;
    bool isPrime = 1;
    while (i<p)
    {
        if (p%i == 0)
        {
            isPrime = 0;
            break;
        }

        i++;

    }
    if(isPrime == 0){
        cout<< p << " is not a prime number";
    }
    else
    {
        cout<< p << " is a prime number";
    }
    

    
}