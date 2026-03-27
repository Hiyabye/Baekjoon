#include <iostream>
#include <set>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> d(n);
  for (int i=0; i<n; i++) cin >> d[i];

  int sum = 0;
  for (int i=0; i<n; i++) sum += d[i];

  set<int> s;
  for (int i=0; i<n; i++) {
    s.insert(sum - d[i]);
  }

  cout << s.size() << "\n";
  for (int x : s) cout << x << " ";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}