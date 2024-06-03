#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool solve(void) {
  vector<int> v(4);
  for (int i=0; i<4; i++) cin >> v[i];
  sort(v.begin(), v.end());

  if (v[0] == 0 && v[1] == 1 && v[2] == 2 && v[3] == 3) return true;
  if (v[0] == 0 && v[1] == 1 && v[2] == 4 && v[3] == 5) return true;
  if (v[0] == 0 && v[1] == 2 && v[2] == 4 && v[3] == 6) return true;
  if (v[0] == 1 && v[1] == 3 && v[2] == 5 && v[3] == 7) return true;
  if (v[0] == 2 && v[1] == 3 && v[2] == 6 && v[3] == 7) return true;
  if (v[0] == 4 && v[1] == 5 && v[2] == 6 && v[3] == 7) return true;
  return false;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) cout << (solve() ? "YES" : "NO") << "\n";
  return 0;
}