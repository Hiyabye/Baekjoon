#include <iostream>
using namespace std;

bool prime(int n) {
  if (n == 1) return false;
  if (n == 2) return true;
  if (!(n & 1)) return false;
  for (int i=3; i*i<=n; i+=2) {
    if (!(n % i)) return false;
  }
  return true;
}

void solve(void) {
  int n; cin >> n;
  int x; for (int i=0; i<n; i++) cin >> x;

  cout << (prime(n) ? "Yes" : "No");
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}