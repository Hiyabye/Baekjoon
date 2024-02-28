#include <iostream>
using namespace std;

void solve(void) {
  int n; char c; cin >> n >> c;

  for (int i=0; i<n; i++) {
    for (int j=0; j<=i; j++) cout << (char)((c-'A'+i)%26+'A');
    cout << "\n";
  }
  cout << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}