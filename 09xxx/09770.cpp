#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
  return b ? gcd(b, a % b) : a;
}

void solve(void) {
  int n;
  vector<int> a;
  while (cin >> n) a.push_back(n);

  int ans = gcd(a[0], a[1]);
  for (int i=0; i<a.size()-1; i++) {
    for (int j=i+1; j<a.size(); j++) {
      ans = max(ans, gcd(a[i], a[j]));
    }
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}