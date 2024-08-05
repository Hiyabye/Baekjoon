#include <iostream>
#include <set>
#include <string>
#include <unordered_map>
using namespace std;

void solve(void) {
  int n; cin >> n;
  set<pair<int, int>> st;
  unordered_map<int, int> mp;
  while (n--) {
    int p, l; cin >> p >> l;
    st.insert({l, p}); mp[p] = l;
  }

  int m; cin >> m;
  while (m--) {
    string s; cin >> s;
    if (s == "recommend") {
      int x; cin >> x;
      if (x == 1) {
        cout << (*st.rbegin()).second << "\n";
      } else if (x == -1) {
        cout << (*st.begin()).second << "\n";
      }
    } else if (s == "add") {
      int p, l; cin >> p >> l;
      st.insert({l, p}); mp[p] = l;
    } else if (s == "solved") {
      int p; cin >> p;
      st.erase({mp[p], p}); mp.erase(p);
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}