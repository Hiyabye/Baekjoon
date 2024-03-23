#include <iostream>
using namespace std;

bool prime(int n) {
  if (n == 1) return false;
  for (int i=2; i*i<=n; i++) {
    if (n % i == 0) return false;
  }
  return true;
}

bool solve(void) {
  int a, b; cin >> a >> b;

  return prime(a) && prime(1000000 * b + a);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "Yes" : "No");
  return 0;
}