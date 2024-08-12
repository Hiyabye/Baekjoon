#include <iostream>
#include <tuple>
#include <vector>
using namespace std;

bool solve(int idx) {
  int n; cin >> n;
  if (n == 0) return false;

  vector<tuple<int, int, int>> ans;
  for (int i=1; i<=n; i++) {
    if (n <= 5 * i || n >= 7 * i) continue;
    ans.push_back({i, 3*n - 15*i, 14*i - 2*n});
  }

  cout << "Case " << idx << ":\n";
  cout << n << " pencils for " << n << " cents\n";
  if (ans.empty()) {
    cout << "No solution found.\n\n";
    return true;
  }

  for (int i=0; i<ans.size(); i++) {
    cout << get<0>(ans[i]) << " at four cents each\n";
    cout << get<1>(ans[i]) << " at two for a penny\n";
    cout << get<2>(ans[i]) << " at four for a penny\n\n";
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int idx = 1;
  while (solve(idx++));
  return 0;
}