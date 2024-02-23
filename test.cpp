#include <iostream>

using namespace std;
int main()
{
  int x, y;
  cin >> x >> y;
  if (x % 2 != 0 && y % 2 != 0)
  {
    cout << x * y;
  }
  if (x % 2 == 0 && y % 2 == 0)
  {
    cout << x / y;
  }
  if (x % 2 != 0 &&y % 2 == 0)
  {
    cout << x + y;
  
  }
  if (x % 2 == 0 &&y % 2 != 0)
  {
    cout << x - y;
  }
    return 0;
  }