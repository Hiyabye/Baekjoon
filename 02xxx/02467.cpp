#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

void solve(void) {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; i++) {
    cin >> a[i];
  }

  sort(a.begin(), a.end());

  int l = 0, r = n - 1;
  int ans_l = l, ans_r = r, key = a[l] + a[r];
  while (l < r) {
    if (abs(a[l] + a[r]) < abs(key)) {
      ans_l = l;
      ans_r = r;
      key = a[ans_l] + a[ans_r];
    }
    if (a[l] + a[r] < 0) l++;
    else                 r--;
  }
  cout << a[ans_l] << " " << a[ans_r];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}