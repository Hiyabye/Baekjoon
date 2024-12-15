#include <iostream>
#include <vector>
using namespace std;

inline long long fact(int n) {
  long long ans = 1;
  for (int i=2; i<=n; i++) ans *= i;
  return ans;
}

void solve(void) {
  int n; cin >> n;

  int t; cin >> t;
  if (t == 1) {
    long long k; cin >> k; k--;
    vector<int> v(n);
    for (int i=0; i<n; i++) v[i] = i+1;
    for (int i=0; i<n; i++) {
      int idx = k / fact(n-i-1);
      cout << v[idx] << " ";
      v.erase(v.begin() + idx);
      k %= fact(n-i-1);
    }
  } else {
    vector<int> v(n);
    for (int i=0; i<n; i++) cin >> v[i];
    long long ans = 1;
    for (int i=0; i<n; i++) {
      long long cnt = 0;
      for (int j=i+1; j<n; j++) {
        if (v[i] > v[j]) cnt++;
      }
      ans += cnt * fact(n-i-1);
    }
    cout << ans;
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}