#include <iostream>

using namespace std;
int main()
{
  int row = 1;
  int n;
  cin >> n;
  while (row <= n)
  {
    int stars_count = 1;
    while (stars_count <= n - row)
    {
      cout << " ";
      ++stars_count;
    }
    while (stars_count <= 2 * row - 1)
    {
      cout << "*";
      ++stars_count;
    }
    cout << "\n";
    ++row;
  }
  while (row >= 1)
  {
    int stars_count = 1;
    while (stars_count <= n - row)
    {
      cout << " ";
      ++stars_count;
    }
    while (stars_count <= 2 * row - 1)
    {
      cout << "*";
      ++stars_count;
    }
    cout << "\n";
    --row;
  }
  return 0;
}