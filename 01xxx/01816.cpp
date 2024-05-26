#include <iostream>
using namespace std;

bool solve(void) {
  long long s; cin >> s;

  for (int i=2; i<=1000000; i++) {
    if (s % i == 0) return false;
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  while (n--) cout << (solve() ? "YES" : "NO") << "\n";
  return 0;
}