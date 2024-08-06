#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;

  vector<int> ans(20, 0);
  while (n--) {
    int a; cin >> a;
    for (int i=0; i<20; i++) {
      if (a & 1) ans[i]++;
      a >>= 1;
    }
  }
  cout << *max_element(ans.begin(), ans.end());
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}