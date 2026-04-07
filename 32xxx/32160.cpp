#include <iostream>
#include <utility>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;

  vector<pair<int, int>> ans;
  for (int i=n-1; i>1; i-=2) {
    ans.emplace_back(i-1, i);
  }

  int one = n / 2, zero = 0;
  while (one >= 2 || zero >= 2) {
    if (one >= 2) {
      ans.emplace_back(1, 1);
      one -= 2;
      zero++;
    } else {
      ans.emplace_back(0, 0);
      zero--;
    }
  }

  if (one == 1 && zero == 1) {
    ans.emplace_back(0, 1);
    ans.emplace_back(1, n);
  } else if (one == 1) ans.emplace_back(1, n);
  else if (zero == 1) ans.emplace_back(0, n);

  cout << ans.back().second - ans.back().first << "\n";
  for (const auto& [a, b] : ans) {
    cout << a << " " << b << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}