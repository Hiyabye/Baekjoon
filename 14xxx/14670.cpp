#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

inline bool check(const unordered_map<int, int> &mp, const vector<int> &s) {
  for (int x : s) {
    if (mp.find(x) == mp.end()) return false;
  }
  return true;
}

void solve(void) {
  int n; cin >> n;
  unordered_map<int, int> mp;
  while (n--) {
    int me, mn; cin >> me >> mn;
    mp[me] = mn;
  }
  
  int r; cin >> r;
  while (r--) {
    int l; cin >> l;
    vector<int> s(l);
    for (int i=0; i<l; i++) cin >> s[i];
    if (check(mp, s)) {
      for (int x : s) cout << mp[x] << " ";
    } else {
      cout << "YOU DIED";
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