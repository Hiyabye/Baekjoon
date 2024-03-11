#include <cmath>
#include <iostream>
using namespace std;

bool solve(void) {
  double b, n; cin >> b >> n;
  if (b == 0 && n == 0) return false;

  int a = pow(b, 1/n);
  if (abs(pow(a, n) - b) > abs(pow(a+1, n) - b)) a++;
  
  cout << a << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}