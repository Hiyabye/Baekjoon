#include <cmath>
#include <iostream>
#include <map>
#include <sstream>
#include <string>
using namespace std;

void solve(void) {
  map<string, int> a, b;

  int n; cin >> n;
  while (n--) {
    string s; int x; cin >> s >> x;
    a[s] = x;
  }

  int m; cin >> m;
  while (m--) {
    string s; int x; cin >> s >> x;
    b[s] = x;
  }

  int q; cin >> q; cin.ignore();
  string cur;
  while (q--) {
    string s; getline(cin, s);
    if (s != "nani ga suki?") {
      stringstream ss(s); ss >> cur;
      cout << "hai!\n";
    } else {
      map<string, int> mp;
      for (auto &[k, v] : a) {
        mp[k] = abs(a[k] - b[cur]);
      }
      string mn1 = "", mn2 = "";
      for (auto &[k, v] : mp) {
        if (mn1 == "" || v < mp[mn1]) {
          mn2 = mn1;
          mn1 = k;
        } else if (mn2 == "" || v < mp[mn2]) {
          mn2 = k;
        }
      }
      cout << mn2 << " yori mo " << mn1 << "\n";
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}