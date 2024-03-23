#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int n; cin >> n;
  string s; cin >> s;

  long long ans = 0;
  string num = "";
  for (int i=0; i<s.length(); i++) {
    if (s[i] < '0' || s[i] > '9') {
      if (num != "") ans += stoi(num);
      num = "";
    } else {
      num += s[i];
    }
  }
  if (num != "") ans += stoi(num);

  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}