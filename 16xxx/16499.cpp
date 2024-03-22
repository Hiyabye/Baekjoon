#include <algorithm>
#include <iostream>
#include <set>
#include <string>
using namespace std;

void solve(void) {
  int n; cin >> n;

  set<string> ans;
  while (n--) {
    string s; cin >> s;
    sort(s.begin(), s.end());
    ans.insert(s);
  }
  cout << ans.size();
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}