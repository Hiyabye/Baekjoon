#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<long long> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  long long sum = accumulate(a.begin(), a.end(), 0LL);
  long long mx = *max_element(a.begin(), a.end());
  cout << (mx <= (sum+1)/2 ? sum : (sum-mx)*2+1);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}