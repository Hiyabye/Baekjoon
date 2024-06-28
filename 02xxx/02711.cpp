#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int n;
  string s;
  cin >> n >> s;
  for (int i=0; i<s.size(); i++) {
    if (i != n-1) cout << s[i];
  }
  cout << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}