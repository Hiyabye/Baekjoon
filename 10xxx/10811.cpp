#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void reverse(vector<int>& v, int l, int r) {
  while (l < r) swap(v[l++], v[r--]);
}

void solve(void) {
  int n, m; cin >> n >> m;
  vector<int> v(n);
  for (int i=0; i<n; i++) v[i] = i+1;

  for (int i=0; i<m; i++) {
    int l, r; cin >> l >> r;
    reverse(v, l-1, r-1);
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