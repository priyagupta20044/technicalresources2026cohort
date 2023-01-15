#include <iostream>
using namespace std;
int main()
{
    int low,high;
    cin >> low >> high;
    for (int i=low;i<=high;i++)
    {
        int sum=0;
        for (int j=1;j<=i;j++)
        {
            if (i%j==0)
            {
                sum+=1;
            }
        }
        if (sum==2)
        {
            cout << i << endl;
        }
    }
    return 0;
}
