#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

bool calc(const vector<int> &p, int l, int r) {
  int sum = accumulate(p.begin()+l, p.begin()+r+1, 0);

  return sum % (r-l+1) == 0 && count(p.begin()+l, p.begin()+r+1, sum / (r-l+1));
}

void solve(void) {
  int n; cin >> n;
  vector<int> p(n);
  for (int i=0; i<n; i++) cin >> p[i];

  int ans = 0;
  for (int i=0; i<n; i++) for (int j=i; j<n; j++) {
    ans += calc(p, i, j);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}