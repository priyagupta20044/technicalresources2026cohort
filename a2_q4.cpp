#include <iostream>
using namespace std;
int main()
{
    int n; 
    cin >> n ;
    int m=(n+1)/2;
    for (int i=1;i<=m;i++)
    {
        for (int j=1;j<=(2*m-1);j++)
        {
            if (j>=(m-(i-1)) && j<=(m+(i-1)))
            {
                cout << "*  " ;
            }
            else 
            {
                cout << "   " ;
            }
        }
        cout << endl ;
    }
    int k=n-m;
    for (int i=k;i>=1;i--)
    {
        for (int j=1; j<=(2*k+1);j++)
        {
            if (j>=(k+1-(i-1)) && j<=(k+1+(i-1)))
            {
                cout << "*  " ;
            }
            else 
            {
                cout << "   " ;
            }
        }
        cout << endl ;
    }
    return 0;
}#include <iostream>
using namespace std;
int main()
{
    int n; 
    cin >> n ;
    int m=(n+1)/2;
    for (int i=1;i<=m;i++)
    {
        for (int j=1;j<=(2*m-1);j++)
        {
            if (j>=(m-(i-1)) && j<=(m+(i-1)))
            {
                cout << "*  " ;
            }
            else 
            {
                cout << "   " ;
            }
        }
        cout << endl ;
    }
    int k=n-m;
    for (int i=k;i>=1;i--)
    {
        for (int j=1; j<=(2*k+1);j++)
        {
            if (j>=(k+1-(i-1)) && j<=(k+1+(i-1)))
            {
                cout << "*  " ;
            }
            else 
            {
                cout << "   " ;
            }
        }
        cout << endl ;
    }
    return 0;
}
