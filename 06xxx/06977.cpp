#include <iostream>
#include <string>
using namespace std;

void backtrack(int n, int k, string s) {
  if (n == 0 && k == 0) {
    cout << s << "\n";
    return;
  }

  if (n) {
    if (k) backtrack(n - 1, k - 1, s + '1');
    backtrack(n - 1, k, s + '0');
  }
}

void solve(void) {
  int n, k; cin >> n >> k;

  cout << "The bit patterns are\n";
  backtrack(n, k, "");
  cout << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}