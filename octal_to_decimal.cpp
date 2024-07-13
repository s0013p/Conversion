#include<iostream>
using namespace std;

int Octal(int n)
{
    int ans=0;
    int x=1;   //8 raised to 0 =1
    
    while(n>0)
    {
        int y=n%10;
        ans+=x*y;
        x=8*x;
        n=n/10;
    }
    return ans;
}

int main()
{
    int n;
    cin>>n;
    
    cout<<"Octal to Decimal is "<<Octal(n);
    
    return 0;
}