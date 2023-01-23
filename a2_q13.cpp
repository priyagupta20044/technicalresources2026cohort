#include <iostream>
using namespace std;
int fact(int n)
{
    if (n==1 || n==0)
    {
        return 1;
    }
    else
    { 
        int factorial =1;
        for (int i=1;i<=n;i++)
        {
            factorial*=i;
        }
        return factorial;
    }
}
int binomial_coeff(int n, int r)
{
    int binomial; 
    int n1= fact(n); 
    int n2= fact(n-r); 
    int n3= fact(r);
    binomial= n1/(n2*n3); 
    return binomial; 
}
int main()
{
    int n; 
    cin >> n;  
    for (int i=0;i<=n;i++)
    {
        for (int j=0;j<=i;j++) // i=0 j=0
        {
            int num= binomial_coeff(i,j); //(4,0)
            cout << num << " " ;
        }
        cout << endl ;
    }

}
