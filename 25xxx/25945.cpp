#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];
  sort(a.begin(), a.end(), greater<int>());

  int sum = 0;
  for (int i=0; i<n; i++) {
    sum += a[i];
  }

  long long ans = 0;
  for (int i=0; i<sum%n; i++) {
    ans += abs(a[i] - sum / n - 1);
  }
  for (int i=sum%n; i<n; i++) {
    ans += abs(a[i] - sum / n);
  }
  cout << ans / 2;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}