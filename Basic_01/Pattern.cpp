// #include <iostream>
// using namespace std;

// int main(){
    //******Pattern Printing*/

    // 1. * * * * *
    //    * * * * *
    //    * * * * *
    //    * * * * *
    //    * * * * *

    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 0; j < 5; j++)
    //     {
    //         cout<<" * ";
    //     }
    //     cout<<endl;

    // }

    // 2. 1 1 1 1 1
    //    2 2 2 2 2
    //    3 3 3 3 3
    //    4 4 4 4 4
    //    5 5 5 5 5

    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int j = 1; j <= 5; j++)
    //     {
    //         cout<<" "<< i <<" ";
    //     }
    //     cout<<endl;

    // }

    // 3. 1 2 3 4 5
    //    1 2 3 4 5
    //    1 2 3 4 5
    //    1 2 3 4 5
    //    1 2 3 4 5

    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int j = 1; j <= 5; j++)
    //     {
    //         cout<<" "<< j <<" ";
    //     }
    //     cout<<endl;

    // }

    // 4. 5 4 3 2 1
    //    5 4 3 2 1
    //    5 4 3 2 1
    //    5 4 3 2 1
    //    5 4 3 2 1

    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int j = 1; j <= 5; j++)
    //     {
    //         cout<<" "<< 5-j+1 <<" ";
    //     }
    //     cout<<endl;

    // }

    // 5. 1 2 3
    //    4 5 6
    //    7 8 9
    //  int n = 1;
    //  for (int i = 0; i < 3; i++)
    //  {
    //      for (int j = 0; j < 3; j++)
    //      {
    //          cout<<" "<<n<<" ";
    //          n++;
    //      }
    //      cout<<endl;
    //  }

    // 6. *
    //    * *
    //    * * *
    //    * * * *
    //    * * * * *

    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout<<" * ";
    //     }
    //     cout<<endl;

    // }

    // 7. 1
    //    2 2
    //    3 3 3
    //    4 4 4 4

    // int n;
    // cin>> n;
    // for (int i = 1; i <=n; i++)
    // {
    //     for (int j = 1; j <=i; j++)
    //     {
    //         cout<<" "<< i << " ";
    //     }
    //     cout<< endl;

    // }

    // 8. 1
    //    2 3
    //    4 5 6
    //    7 8 9 10

    // int count =1, n;
    // cin>> n;
    // for (int i = 1; i <=n; i++)
    // {
    //     for (int j = 1; j <=i; j++)
    //     {
    //         cout<<" "<< count << " ";
    //         count++;
    //     }
    //     cout<< endl;

    // }

    // 9. 1
    //    2 3
    //    3 4 5
    //    4 5 6 7

    // int n;
    // cin>> n;
    // for (int i = 1; i <=n; i++)
    // {
    //     // int value = i;
    //     for (int j = 1; j <=i; j++)
    //     {
    //         // cout<<" "<< value << " ";
    //         // value++;
    //         cout<< " "<< i+j-1 << " ";
    //     }
    //     cout<< endl;

    // }

    // 10. 1
    //     2 1
    //     3 2 1
    //     4 3 2 1

    // int n;
    // cin>> n;
    // for (int i = 1; i <=n; i++)
    // {
    //     // int value = i;
    //     for (int j = 1; j <=i; j++)
    //     {
    //         // cout<<" "<< value << " ";
    //         cout<<" "<< i-j+1 << " ";

    //         // value--;
    //     }
    //     cout<< endl;

    // }

    // 11. A A A A
    //     B B B B
    //     C C C C
    //     D D D D
    //  int n;
    //  cin>>n;
    //  for (int i = 1; i <= n; i++)
    //  {
    //      for (int j = 1; j <= n; j++)
    //      {
    //          char ch = 'A' + i -1;
    //          cout<<" "<< ch << " ";
    //      }
    //      cout<< endl;

    // }

    // 12. A  B  C  D  E
    //     A  B  C  D  E
    //     A  B  C  D  E
    //     A  B  C  D  E
    //     A  B  C  D  E

    // int n;
    // cin>>n;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         char ch = 'A' + j -1;
    //         cout<<" "<< ch << " ";
    //     }
    //     cout<< endl;

    // }

    // 13. A
    //     B C
    //     D E F
    //     G H I J

    // int n;
    // char ch = 'A';
    // cin>>n;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout<< " " << ch << " ";
    //         ch++;
    //     }
    //     cout<< endl;

    // }

    // 13. A B C
    //     B C D
    //     C D E

    // int n;
    // cin>> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         char ch = 'A' + i + j - 2;
    //         cout<< " " << ch << " ";
    //     }
    //     cout<< endl;

    // }

    // 14. A
    //     B B
    //     C C C
    //     D D D D

    // int n;
    // cin>>n;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         char ch = 'A' + i -1;
    //         cout<<" "<< ch << " ";
    //     }
    //     cout<< endl;

    // }

    //   15. A
    //       B C
    //       D E F
    //       G H I J

    // int n;
    // char ch = 'A';
    // cin>> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout<< " "<< ch << " ";
    //         ch++;
    //     }
    //     cout<< endl;

    // }

    // 16. A
    //     B C
    //     C D E
    //     D E F G

    // int n;
    // cin>>n;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         char ch = 'A'+ i + j - 2;
    //         cout<< " " << ch << " ";
    //     }
    //     cout<< endl;

    // }

    // 17. E
    //     D  E
    //     C  D  E
    //     B  C  D  E
    //     A  B  C  D  E

    // int n;
    // cin>>n;
    // for (int i = 1; i <= n; i++)
    // {
    //     char ch = 'A' + n - i;

    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout<< " " << ch << " ";
    //         ch++;
    //     }
    //     cout<< endl;

    // }

// }

#include <iostream>
using namespace std;

int main(){
    

    // 18.           *
    //            *  *
    //         *  *  *
    //      *  *  *  *
    //   *  *  *  *  *

    // int n;
    // cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         if (j <= n - i)
    //         {
    //             cout << "   ";
    //         }
    //         else
    //         {
    //             cout << " * ";
    //         }
    //     }
    //     cout << endl;
    // }

    // 19. * * * * *
    //     * * * *
    //     * * *
    //     * *
    //     *

    // int n;
    // cin>> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         if (j <= n-i + 1)
    //         {
    //             cout<<" * ";
    //         }
    //         else
    //         {
    //             cout<< "   ";
    //         }
            
            
    //     }
    //     cout<< endl;
        
    // }

    // 20. * * * * *
    //       * * * *
    //         * * *
    //           * *
    //             *

    // int n;
    // cin>> n;

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         if (j < i)
    //         {
    //             cout<< "   ";
    //         }
    //         else
    //         {
    //             cout<< " * ";
    //         }
            
            
    //     }
    //     cout<< endl;
        
    // }
    
    
    // 20. 1 1 1 1 1
    //       2 2 2 2
    //         3 3 3
    //           4 4
    //             5


    int n;
    cin>> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j < i )
            {
                cout<< " ";
            }
            else
            {
                cout<< i;
            }
            
            
        }
        cout<< endl;
        
    }
    
    

}