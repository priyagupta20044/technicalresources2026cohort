#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n; //n=5
    int m=n/2;  // m=2
    int p=1;
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=m;j++)
        {
            if (i==m+1)
            {
                cout << " *";
            }
            else 
            {
                cout << "  ";
            }

        }
        for (int k=1;k<=p;k++)
        {
            cout << " *";
        }
        if (i<m+1)
        {
            p++;
        }
        else 
        {
            p--;
        }
        cout << endl ;
    }
    return 0;
}
