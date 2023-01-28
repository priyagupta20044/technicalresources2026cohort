#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n; //n=5
    int m=n/2;  // m=2
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=n;j++)
        {
            if (i<=m)
            {
                if (j==1 || j==n)
                {
                    cout << " *";
                }
                else 
                {
                    cout << "  ";
                }
            }
            else
            {
                int p=i-(m+1);
                if (j==1 || j==n || j==(m+1)-p || j==(m+1)+p)
                {
                    cout << " *";
                }
                else 
                {
                    cout << "  ";
                }
            }
        }
        cout << endl ;
    }

    return 0;
}
