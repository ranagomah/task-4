#include <iostream>
using namespace std;
int main()
{
    int number;
    cin >> number;
    if(number==1){
        cout<<"no";
    }
    for (int n = 2; n < number; ++n)
    {
        if ( number%n == 0)
        {
            cout << "no";
            return 0;
        }
        else
            cout << "yes";
            break;
    }

    return 0;
}