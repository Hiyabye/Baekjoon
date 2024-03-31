#include <iostream>
#include <utility>
#include <vector>
using namespace std;

vector<int> calc(pair<int, int> p) {
  vector<int> ret;
  while (p.first >= 0) {
    ret.push_back(p.first);
    p = {p.second, p.first - p.second};
  }
  return ret;
}

void solve(void) {
  pair<int, int> p; cin >> p.first, p.second = 1;

  vector<int> ans = calc(p);
  for (int i=2; i<=p.first; i++) {
    vector<int> t = calc({p.first, i});
    if (t.size() > ans.size()) ans = t;
  }

  cout << ans.size() << "\n";
  for (int i=0; i<ans.size(); i++) {
    cout << ans[i] << " ";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}