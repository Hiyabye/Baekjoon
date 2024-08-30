#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> v(n);
  for (int i=0; i<n; i++) cin >> v[i];
  int k; cin >> k;

  for (int i=0; i<k; i++) {
    sort(v.begin()+i*(n/k), v.begin()+(i+1)*(n/k));
  }

  for (int i=0; i<n; i++) {
    cout << v[i] << " ";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}