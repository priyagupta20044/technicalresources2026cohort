#include <iostream>
#include <limits.h>
using namespace std;
int main()
{
    int a,b,lcm,gcd; 
    cin >> a >> b;
    int q=(a>b)?a:b;
    for (int i=1;i<=q;i++)
    {
        if (a%i==0 && b%i==0)
        {
            gcd=i;
        }
    }
    int k=INT_MAX;
    cout << gcd << endl;
    for (int i=q;i<k;i++) // i=71
    {
        if (i%a==0 && i%b==0) 
        {
            lcm=i;
            break;
        }
    }
    cout << lcm << endl; 
    return 0;
}
