#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

void solve(void) {
  int n, k; cin >> n >> k;
  unordered_map<string, int> mp1;
  while (n--) {
    string t; cin >> t;
    mp1[t]++;
  }
  vector<string> c(k);
  for (int i=0; i<k; i++) cin >> c[i];

  unordered_map<string, vector<string>> mp2;
  while (k--) {
    string s; int m; cin >> s >> m;
    while (m--) {
      string t; cin >> t;
      mp2[s].push_back(t);
    }
  }

  for (string &i : c) {
    for (string &j : mp2[i]) {
      for (int k=0; k<mp1[j]; k++) cout << j << " ";
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}