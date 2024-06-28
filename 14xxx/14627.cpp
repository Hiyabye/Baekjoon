#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int s, c; cin >> s >> c;
  vector<long long> v(s);
  for (int i=0; i<s; i++) cin >> v[i];

  long long ans = 0;
  long long lo = 1, hi = 1e9;
  while (lo <= hi) {
    long long mid = (lo+hi) / 2;

    int cnt = 0;
    for (int i=0; i<s; i++) {
      cnt += v[i] / mid;
    }
    if (cnt >= c) {
      ans = mid;
      lo = mid+1;
    } else {
      hi = mid-1;
    }
  }

  long long sum = -ans*c;
  for (int i=0; i<s; i++) {
    sum += v[i];
  }
  cout << sum;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}