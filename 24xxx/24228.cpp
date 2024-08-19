#include <iostream>
using namespace std;

void solve(void) {
  long long n, r; cin >> n >> r;

  cout << n + r * 2 - 1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}