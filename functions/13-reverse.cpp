#include<iostream>
using namespace std;

int main() {
  int n;
  int reverse = 0;
  cout<<"Enter a Number:\n";
  cin >> n;

  while (n > 0) {
    int lastdigit = n % 10;
    reverse = (reverse * 10) + lastdigit;
    n = n / 10;
  }

  cout << reverse << endl;

  return 0;
}