#include<iostream>
using namespace std;

int Binary(int n)
{
    int ans=0;
    int x=1;

    while(n>0)
    {
        int y=n%2;
        ans+=x*y;
        x=10*x;
        n=n/2;
    }
    return ans;
}


int main()
{
    int n;
    cin>>n;

    cout<<"Decimal no. is "<<Binary(n);
}