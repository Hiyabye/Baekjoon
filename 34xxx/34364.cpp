#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int n; string s; cin >> n >> s;

  for (int i=0; i<n; i++) {
    long long k = (1LL << i) % 26;
    while (k--) s[i] = (s[i] - 'A' + 1) % 26 + 'A';
  }
  cout << s;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}