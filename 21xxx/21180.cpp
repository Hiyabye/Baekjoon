#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> v(n);
  for (int i=0; i<n; i++) cin >> v[i];

  int sum = accumulate(v.begin(), v.end(), 0);
  for (int i=0; i<n; i++) {
    if (v[i] == sum - v[i]) {
      cout << v[i];
      return;
    }
  }
  cout << "BAD";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}