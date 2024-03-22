#include <iostream>
using namespace std;

void solve(void) {
  long long n; cin >> n;

  cout << (n == 1 ? 0 : (n + 1) / 2);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}