#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

inline bool check(int k, const vector<string> &v) {
  return find(v.begin(), v.end(), "pea soup") != v.end() && find(v.begin(), v.end(), "pancakes") != v.end();
}

void solve(void) {
  int n; cin >> n;

  vector<string> ans;
  while (n--) {
    int k; cin >> k; cin.ignore();
    string s; getline(cin, s);
    vector<string> v(k);
    for (int i=0; i<k; i++) getline(cin, v[i]);
    if (check(k, v)) {
      ans.push_back(s);
    }
  }
  cout << (ans.empty() ? "Anywhere is fine I guess" : ans[0]) << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}