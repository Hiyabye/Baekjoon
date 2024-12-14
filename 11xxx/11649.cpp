#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<string> v(n);
  for (int i=0; i<n; i++) cin >> v[i];
  for (int i=0; i<n; i++) reverse(v[i].begin(), v[i].end());
  sort(v.begin(), v.end());

  for (int i=0; i<n; i++) {
    cout << v[i] << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}