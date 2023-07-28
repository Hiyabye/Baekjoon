#include <bits/stdc++.h>
using namespace std;

void solve(void) {
  long long a, b;
  cin >> a >> b;

  vector<bool> p(b-a+1, true);
  for (long long i=2; i*i<=b; i++) {
    for (long long j=a/(i*i); j*(i*i)<=b; j++) {
      if (j*(i*i) >= a) p[j*(i*i)-a] = false;
    }
  }

  int ans = 0;
  for (int i=0; i<b-a+1; i++) {
    if (p[i]) ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}