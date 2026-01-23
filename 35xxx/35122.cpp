#include <cmath>
#include <iostream>
using namespace std;

void solve(void) {
  long long n; cin >> n;

  long long b = 10;
  for (int i=0; i<18; i++) {
    if (n > b) { b = 10 * b + 9; continue; }
    long long c = pow(10, i);
    cout << n - c << c;
    return;
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}