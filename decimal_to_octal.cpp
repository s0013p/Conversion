#include <iostream>
using namespace std;

int Octal(int n)
{
    int x=1;
    int ans=0;
    
    while(n>0)
    {
        int y=n%8;
        ans+=x*y;
        x*=10;
        n=n/8;
    }
    
    return ans;
}

int main() {

    int n;
    cin>>n;
    
    cout<<"Binary no. is "<<Octal(n);
    return 0;
}