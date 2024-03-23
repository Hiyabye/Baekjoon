#include <iostream>
#include <map>
#include <string>
using namespace std;

void solve(void) {
  int n; cin >> n;
  map<string, string> mp;
  while (n--) {
    string a, b; char c;
    cin >> a >> c >> b;
    mp[a] = b;
  }

  int t; cin >> t;
  while (t--) {
    int k; cin >> k;
    while (k--) {
      string s; cin >> s;
      cout << mp[s] << " ";
    }
    cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}