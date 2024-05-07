#include <iostream>
using namespace std;

bool check(int n) {
  int sum = 0;
  for (int i=1; i<=n-1; i++) {
    if (!(n % i)) sum += i;
  }
  return sum > n;
}

bool solve(void) {
  int n; cin >> n;

  if (!check(n)) return false;
  for (int i=1; i<=n-1; i++) {
    if (n % i) continue;
    if (check(i)) return false;
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) cout << (solve() ? "Good Bye" : "BOJ 2022") << "\n";
  return 0;
}