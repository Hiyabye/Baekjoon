#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;

  vector<int> v(n+1, 0);
  for (int i=1; i<=2*n; i++) {
    int x; cin >> x;
    if (v[x]) v[x] += i;
    else v[x] -= i;
  }
  cout << *max_element(v.begin(), v.end()) - 1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}