#include <iostream>
using namespace std;
int main()
{
    int n,term1=1,term2=1,next_term=0;
    cin >> n;
    cout << 0 << endl << 1 << " " << 1 << endl;
    for (int i=3;i<=n;i++)
    {
        for (int j=1;j<=i;j++)
        {
            next_term = term1+term2;
            term1=term2;
            term2=next_term;
            cout << next_term << " ";
        }
        cout << endl ;
    }
    return 0;
}
