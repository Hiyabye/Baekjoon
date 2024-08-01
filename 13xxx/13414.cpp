#include <iostream>
#include <string>
#include <unordered_set>
#include <vector>
using namespace std;

void solve(void) {
  int k, l; cin >> k >> l;
  vector<string> v(l);
  for (int i=0; i<l; i++) cin >> v[i];

  unordered_set<string> s;
  vector<string> ans;
  for (int i=l-1; i>=0; i--) {
    if (s.find(v[i]) != s.end()) continue;
    ans.push_back(v[i]);
    s.insert(v[i]);
  }

  for (int i=ans.size()-1; i>=0 && i+k>=ans.size(); i--) {
    cout << ans[i] << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}