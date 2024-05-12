#include <cmath>
#include <iostream>
using namespace std;

void solve(void) {
  long long n; cin >> n;

  cout << (n == 0 ? 0 : (int)ceil(log2(n) + 1));
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}