#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;

  unordered_map<string, int> mp1;
  for (int i=0; i<n; i++) {
    string s; cin >> s;
    mp1[s] = i;
  }

  unordered_map<int, int> mp2;
  for (int i=0; i<n; i++) {
    string s; cin >> s;
    mp2[mp1[s]] = i;
  }

  vector<string> ans(n);
  for (int i=0; i<n; i++) cin >> ans[i];
  for (int i=0; i<n; i++) cout << ans[mp2[i]] << " ";
  cout << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}