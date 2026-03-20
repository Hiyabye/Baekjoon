#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

void solve(int idx) {
  int n; cin >> n;
  vector<int> v(n);
  for (int i=0; i<n; i++) cin >> v[i];

  int ans = 0;
  unordered_set<int> us(v.begin(), v.end());
  for (int i=0; i<n; i++) {
    ans++;
    if (us.find(v[i]) == us.end()) continue;
    us.erase(v[i]);
    if (us.empty()) break;
  }
  cout << "Case " << idx << ": " << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  for (int i=1; i<=t; i++) solve(i);
  return 0;
}