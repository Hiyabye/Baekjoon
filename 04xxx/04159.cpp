#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool solve(void) {
  int n; cin >> n;
  if (n == 0) return false;

  vector<int> v(n);
  for (int i=0; i<n; i++) cin >> v[i];
  sort(v.begin(), v.end());
  v.push_back(1422);

  for (int i=0; i<n; i++) {
    if (v[i+1] - v[i] > 200) {
      cout << "IMPOSSIBLE\n";
      return true;
    }
  }
  cout << (v[n] - v[n-1] > 100 ? "IMPOSSIBLE" : "POSSIBLE") << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  while (solve());
  return 0;
}