#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string a, b; cin >> a >> b;

  long long ans = 0;
  for (int i=0; i<a.length(); i++) {
    for (int j=0; j<b.length(); j++) {
      ans += (a[i]-'0') * (b[j]-'0');
    }
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}