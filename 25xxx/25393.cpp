#include <algorithm>
#include <iostream>
#include <map>
#include <set>
#include <utility>
using namespace std;

set<pair<int, int>> st;
map<int, int> mp1, mp2;

inline bool check(int l, int r) {
  if (mp1.find(l) == mp1.end()) return false;
  if (mp2.find(r) == mp2.end()) return false;
  return mp1[l] >= r && mp2[r] <= l;
}

void solve(void) {
  int n; cin >> n;
  while (n--) {
    int l, r; cin >> l >> r;
    st.insert({l, r});
    mp1[l] = (mp1.find(l) == mp1.end() ? r : max(mp1[l], r));
    mp2[r] = (mp2.find(r) == mp2.end() ? l : min(mp2[r], l));
  }

  int q; cin >> q;
  while (q--) {
    int l, r; cin >> l >> r;
    cout << (st.find({l, r}) != st.end() ? 1 : (check(l, r) ? 2 : -1)) << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}