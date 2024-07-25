#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

void solve(void) {
  int n, y; cin >> n >> y;
  unordered_set<int> k;
  while (y--) {
    int x; cin >> x;
    k.insert(x);
  }

  int ans = n;
  for (int i=0; i<n; i++) {
    if (k.find(i) != k.end()) continue;
    cout << i << "\n";
    ans--;
  }
  cout << "Mario got " << ans << " of the dangerous obstacles.";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}