#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i=1;i<=2*n-1;i++)
    {
        for (int j=1;j<=2*n-1;j++)
        {
            if (i<=n)
            {
                if ( j==(n-(i-1)) || j==(n+(i-1)) )
                {
                    cout << '*';
                }
                else 
                {
                    cout << " ";
                }
            }
            else 
            {
                int m=2*n-1-i;
                if (j==(n-m) || j==(n+m))
                {
                    cout << '*';
                }
                else 
                {
                    cout << " ";
                }
            }
            
        }
        cout << endl ;
    }
    return 0;
}

