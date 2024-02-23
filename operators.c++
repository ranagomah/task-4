#include <iostream>

using namespace std;
int main()
{

    float n1, n2, n3, n4, n5;
    cin >> n1>>n2>>n3>>n4>>n5;
    cout << "averge =" << (n1 + n2 + n3 + n4 + n5) / 5 << "\n";
    cout << (n1 + n2 + n3) / (n4 + n5) << "\n";
    cout << ((n1 + n2 + n3) / 3) / ((n4 + n5) / 2) << "\n";

    return 0;
}