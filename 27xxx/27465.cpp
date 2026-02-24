#include <iostream>
using namespace std;

inline bool prime(int x) {
  if (x < 2) return false;
  for (int i=2; i*i<=x; i++) {
    if (!(x % i)) return false;
  }
  return true;
}

void solve(void) {
  int n; cin >> n;

  while (prime(n)) n++;
  cout << n;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}