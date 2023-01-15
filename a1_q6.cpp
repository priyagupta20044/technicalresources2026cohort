#include <iostream>
using namespace std;
int main()
{
    int n ;
    cin >> n ;
    int sum=0;
    while (n)
    {
        int p=n%10;
        sum=(sum*10)+(p);
        n/=10;
    }
    cout << sum << endl ;
}
