#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  int n, i; cin >> n >> i;
  vector<string> v(n);
  for (int j=0; j<n; j++) cin >> v[j];
  sort(v.begin(), v.end());

  cout << v[i-1];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}