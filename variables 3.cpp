#include <iostream>

using namespace std;
int main()
{
    int even1, odd1, even2, odd2, even3, odd3, even4, odd4;
    cin >> even1 >> odd1 >> even2 >> odd2 >> even3 >> odd3 >> even4 >> odd4;
    cout << "sum of even numbers = "
         << " " << even1 + even2 + even3 + even4<<"\n";
    cout << "sum of odd numbers = "
         << " " << odd1 + odd2 + odd3 + odd4;
    return 0;
}