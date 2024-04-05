#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int digits(int n) {
  int ret = 0;
  while (n /= 10) ret++;
  return ret;
}

void solve(void) {
  int n, k; cin >> n >> k;
  vector<int> v(k);
  for (int i=0; i<k; i++) cin >> v[i];

  vector<int> ans;
  for (int a : v) ans.push_back(a);
  for (int i=1; i<=digits(n); i++) {
    vector<int> tmp;
    for (int a : ans) for (int b : v) tmp.push_back(10 * a + b);
    ans.insert(ans.end(), tmp.begin(), tmp.end());
  }
  sort(ans.begin(), ans.end(), greater<int>());

  for (int a : ans) {
    if (a <= n) {
      cout << a;
      break;
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}