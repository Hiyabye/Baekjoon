#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> m(n);
  for (int i=0; i<n; i++) cin >> m[i];

  if (*min_element(m.begin(), m.end()) == 3) cout << "None";
  else if (*min_element(m.begin(), m.end()) == 5) cout << "Named";
  else if (accumulate(m.begin(), m.end(), 0) * 2 >= 9 * n) cout << "High";
  else cout << "Common";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}