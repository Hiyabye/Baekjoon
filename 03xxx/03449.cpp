#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string a; cin >> a;
  string b; cin >> b;

  int ans = 0;
  for (int i=0; i<a.length(); i++) {
    if (a[i] != b[i]) ans++;
  }
  cout << "Hamming distance is " << ans << ".\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}