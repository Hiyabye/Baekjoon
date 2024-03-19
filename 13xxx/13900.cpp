#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;

  vector<long long> cnt(10001, 0);
  while (n--) {
    int x; cin >> x;
    cnt[x]++;
  }

  long long ans = 0;
  for (long long i=1; i<=10000; i++) {
    if (cnt[i] >= 2) ans += i*i*cnt[i]*(cnt[i]-1)/2;
    for (long long j=i+1; j<=10000; j++) {
      ans += i*j*cnt[i]*cnt[j];
    }
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}