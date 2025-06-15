#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

inline int up(int n, vector<int> a) {
  int ret = 0;
  for (int i=0; i<n-1; i++) for (int j=0; j<n-i-1; j++) {
    if (a[j] > a[j+1]) swap(a[j], a[j+1]), ret++;
  }
  return ret;
}

inline int down(int n, vector<int> a) {
  int ret = 0;
  for (int i=0; i<n-1; i++) for (int j=0; j<n-i-1; j++) {
    if (a[j] < a[j+1]) swap(a[j], a[j+1]), ret++;
  }
  return ret;
}

void solve(void) {
  int n; cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  cout << min(up(n, a), down(n, a) + 1);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}