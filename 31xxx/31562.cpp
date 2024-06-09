#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;

  unordered_map<string, string> mp;
  while (n--) {
    int t; string s; cin >> t >> s;
    vector<string> a(7);
    for (int i=0; i<7; i++) cin >> a[i];
    mp[a[0]+a[1]+a[2]] = (mp.find(a[0]+a[1]+a[2]) != mp.end() ? "?" : s);
  }

  while (m--) {
    string a, b, c; cin >> a >> b >> c;
    cout << (mp.find(a+b+c) == mp.end() ? "!" : mp[a+b+c]) << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}