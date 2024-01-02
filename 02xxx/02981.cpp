#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int gcd(int a, int b) {
  return b ? gcd(b, a % b) : a;
}

void solve(void) {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];
  sort(a.begin(), a.end());

  int g = a[1] - a[0];
  for (int i=2; i<n; i++) {
    g = gcd(g, a[i] - a[i-1]);
  }

  set<int> s;
  for (int i=1; i*i<=g; i++) {
    if (g % i) continue;
    s.insert(i);
    s.insert(g/i);
  }

  vector<int> ans;
  for (auto it=s.begin(); it!=s.end(); it++) {
    if (*it != 1) ans.push_back(*it);
  }
  sort(ans.begin(), ans.end());
  for (int i=0; i<ans.size(); i++) {
    cout << ans[i] << " ";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}