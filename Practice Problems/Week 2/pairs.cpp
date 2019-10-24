#include<iostream>
using namespace std;

bool prime(int n,bool A[])
{
    int B[n];
    for(int i = 0;i<n;++i)
    {
        B[i]= i;
    }
    A[0]  = false;
    A[1] = false;
    for(int a = 2;a<n;++a)
    {
        A[a] = true;
    }
   for(int i = 2;i<n;++i)
   {
       int v = B[i];
       for(int j = 2;j<v;++j)
       {
           if(v%j==0)
           {
               A[i] = false;
           }
       }
   }
}
void primePair(int n)
{
    bool A[n];
    prime(n,A);
    int c = 0;
    for(int i = 0;i<=n/2;++i)
    {
        if(A[i] && A[n-i])
        {
            ++c;
        }
    }
    cout<<c<<endl;
}
int main()
{
    int n = 12;
    primePair(n);
    return 0;
}
