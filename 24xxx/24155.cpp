#include <algorithm>
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> s(n), t(n);
  for (int i=0; i<n; i++) cin >> s[i], t[i] = s[i];
  sort(t.begin(), t.end(), greater<int>());

  unordered_map<int, int> mp;
  for (int i=0; i<n; i++) {
    if (mp.find(t[i]) == mp.end()) mp[t[i]] = i+1;
  }

  for (int i=0; i<n; i++) {
    cout << mp[s[i]] << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}