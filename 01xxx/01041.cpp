#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

inline long long calc1(const vector<long long> &v) {
  long long ret = 1e18;
  for (int i=0; i<5; i++) for (int j=i+1; j<6; j++) {
    if (i + j == 5) continue;
    ret = min(ret, v[i] + v[j]);
  }
  return ret;
}

inline long long calc2(const vector<long long> &v) {
  long long ret = 1e18;
  for (int i=0; i<4; i++) for (int j=i+1; j<5; j++) for (int k=j+1; k<6; k++) {
    if (i + j == 5 || i + k == 5 || j + k == 5) continue;
    ret = min(ret, v[i] + v[j] + v[k]);
  }
  return ret;
}

void solve(void) {
  long long n; cin >> n;
  vector<long long> v(6);
  for (int i=0; i<6; i++) cin >> v[i];
  if (n == 1) {
    cout << accumulate(v.begin(), v.end(), 0LL) - *max_element(v.begin(), v.end());
    return;
  }

  cout << *min_element(v.begin(), v.end())*(n-2)*(5*n-6) + calc1(v)*(8*n-12) + calc2(v)*4;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}