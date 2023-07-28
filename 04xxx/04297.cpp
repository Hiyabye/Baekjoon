#include <bits/stdc++.h>
using namespace std;

long long merge(vector<int> &a, int l, int m, int r) {
  int i = l, j = m+1, k = 0;
  long long inv = 0;
  vector<int> tmp(r-l+1);

  while (i <= m && j <= r) {
    if (a[i] <= a[j]) tmp[k++] = a[i++];
    else {
      tmp[k++] = a[j++];
      inv += m+1-i;
    }
  }
  while (i <= m) tmp[k++] = a[i++];
  while (j <= r) tmp[k++] = a[j++];
  for (int i=l; i<=r; i++) a[i] = tmp[i-l];

  return inv;
}

long long mergeSort(vector<int> &a, int l, int r) {
  if (l >= r) return 0;
  int m = l+(r-l)/2;
  return mergeSort(a, l, m) + mergeSort(a, m+1, r) + merge(a, l, m, r);
}

bool solve(void) {
  int n;
  cin >> n;
  if (n == 0) return false;

  vector<int> a(n);
  for (int i=0; i<n; i++) {
    cin >> a[i];
  }

  cout << mergeSort(a, 0, n-1) << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  while (solve());
  return 0;
}