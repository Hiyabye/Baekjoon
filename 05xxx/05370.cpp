#include <iostream>
using namespace std;

void solve(int n) {
  int zero = 0, one = 0;
  if (n == 0) {
    cout << "left\n";
    return;
  }

  while (n) {
    if (n & 1) one++;
    else zero++;
    n >>= 1;
  }
  cout << (zero > one ? "left" : zero < one ? "right" : "straight") << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  while (cin >> n) solve(n);
  return 0;
}