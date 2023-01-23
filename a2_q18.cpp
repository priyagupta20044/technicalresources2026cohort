#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int m=(n+1)/2;
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=n;j++)
        {
            if (i<=m)
            {
                int p=m-i;
                if (i==1 || j==(m-p) || j==(m+p))
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
                int q=i-m;
                if (j>=m-q && j<=m+q)
                {
                    cout << '*';
                }
                else 
                {
                    cout << " ";
                }
            }
        }
        cout << endl; 
    }
    return 0;
}

