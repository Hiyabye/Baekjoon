#include <iomanip>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  string s; getline(cin, s);
  vector<string> v;
  while (s.length()) {
    v.push_back(s);
    getline(cin, s);
  }

  int r = 0, a = 0;
  for (const string &s : v) {
    for (char c : s) {
      if (c != '#') r++;
      a++;
    }
  }

  int ans = r * 10000 / a;
  cout << "Efficiency ratio is ";
  if (ans % 100 == 0) cout << ans / 100 << "%.\n";
  else if (ans / 10 % 10 == 9 && ans % 10 >= 5) cout << (ans + 5) / 100 << "%.\n";
  else cout << fixed << setprecision(1) << (r * 100.0 / a) << "%.\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  cin.ignore();
  while (n--) solve();
  return 0;
}