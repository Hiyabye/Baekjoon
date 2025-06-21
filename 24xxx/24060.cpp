#include <iostream>
#include <vector>
using namespace std;

int n, k;
int ans = -1, cnt = 0;

void merge(vector<int> &a, int p, int q, int r) {
  int i = p, j = q+1, t = 1;
  vector<int> tmp(r-p+2);
  while (i <= q && j <= r) {
    if (a[i] <= a[j]) tmp[t++] = a[i++];
    else tmp[t++] = a[j++];
  }
  while (i <= q) tmp[t++] = a[i++];
  while (j <= r) tmp[t++] = a[j++];

  i = p, t = 1;
  while (i <= r) {
    a[i] = tmp[t++];
    if (++cnt == k) ans = a[i];
    i++;
  }
}

void merge_sort(vector<int> &a, int p, int r) {
  if (p < r) {
    int q = (p + r) / 2;
    merge_sort(a, p, q);
    merge_sort(a, q+1, r);
    merge(a, p, q, r);
  }
}

void solve(void) {
  cin >> n >> k;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  merge_sort(a, 0, n-1);
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}