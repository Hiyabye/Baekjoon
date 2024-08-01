#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_set>
#include <vector>
using namespace std;

inline string calc(const string &s) {
  vector<string> v;
  for (int i=0; i<s.length(); i++) {
    v.push_back(s.substr(i) + s.substr(0, i));
  }
  return *min_element(v.begin(), v.end());
}

void solve(void) {
  int n; cin >> n;

  unordered_set<string> ans;
  while (n--) {
    string s; cin >> s;
    ans.insert(calc(s));
  }
  cout << ans.size();
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}