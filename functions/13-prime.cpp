#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int n;
  cout << "Enter a Number\n";
  cin >> n;
  bool flag = 0;
  for (int i = 2; i <= sqrt(n); i++)
  {
    if (n % i == 0)
    {
      cout << n << " Non-Prime" << endl;
      flag = 1;
      break;
    }
  }

  if (flag == 0)
  {
    cout << n << "Prime";
  }

  return 0;
}