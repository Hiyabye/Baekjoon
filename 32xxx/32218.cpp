#include <iostream>
#include <vector>
using namespace std;

inline vector<int> calc(int n, const vector<int> &a) {
  vector<int> b(n, 0);
  for (int i=0; i<n; i++) for (int j=i+1; j<n; j++) {
    if (a[j] > a[i]) b[i]++;
  }
  return b;
}

int solve(void) {
  int n; cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  int ans = 0;
  while (ans++ < 1000) {
    vector<int> b = calc(n, a);
    if (a == b) return ans;
    a = b;
  }
  return -1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}