#include <iostream>
#include <string>

using namespace std;

string Hexadecimal(int n)
{


    string s = "";
    while (n > 0)
    {
        int y = n % 16;
        if (y < 10)
        {
            s = to_string(y) + s; 
        }
        else
        {
            s = char(y + 'A' - 10) + s;
        }
        n = n / 16;
    }
    return s;
}

int main() {
    int n;
    cin >> n;

    cout << "Hexadecimal no. is " << Hexadecimal(n);
    return 0;
}
