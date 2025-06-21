#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<string> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  bool ok = false;
  for (int i=1; i<n; i++) {
    if (a[i-1].length() < a[i].length()) continue;
    string s = "9" + a[i-1].substr(1);
    if (s > a[i]) {
      a[i-1] = s;
      ok = true;
      break;
    }
    string t = (a[i-1].length() == 1) ? "0" : "1" + a[i].substr(1);
    if (a[i-1] > t) {
      a[i] = t;
      ok = true;
      break;
    }
  }

  if (!ok) {
    cout << "impossible";
  } else {
    for (string &s : a) cout << s << " ";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}