#include <iostream>
#include <string>
using namespace std;

void solve(int idx) {
  int l; cin >> l;
  string a; cin >> a;
  string b; cin >> b;

  int ans = 0;
  for (int i=0; i<l; i++) {
    if (a[i] != b[i]) ans++;
  }
  cout << "Case " << idx << ": " << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  for (int i=1; i<=t; i++) solve(i);
  return 0;
}