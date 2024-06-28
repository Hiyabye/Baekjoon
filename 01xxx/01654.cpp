#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(void) {
  int k, n;
  cin >> k >> n;
  vector<int> a(k);
  for (int i=0; i<k; i++) {
    cin >> a[i];
  }

  long long l = 1, r = *max_element(a.begin(), a.end());
  while (l < r) {
    long long m = (l+r+1)/2;
    int cnt = 0;
    for (int i=0; i<k; i++) {
      cnt += a[i] / m;
    }
    if (cnt >= n) l = m;
    else r = m-1;
  }
  
  cout << l;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}