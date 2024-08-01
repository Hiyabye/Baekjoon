#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_set>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  int k; cin >> k;
  vector<string> v(n);
  for (int i=0; i<n; i++) cin >> v[i];
  sort(v.begin(), v.end());

  unordered_set<string> ans;
  do {
    string s;
    for (int i=0; i<n; i++) {
      if (((1<<k)-1) & (1<<i)) s += v[i];
    }
    ans.insert(s);
  } while (next_permutation(v.begin(), v.end()));
  cout << ans.size();
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}