#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

vector<int> a;
long long ans = 0, cur = 0;
int n, s, l, r;

inline bool left(void) {
  long long sum = 0;
  int tmp = l;
  bool flag = false;
  while (l >= 0) {
    sum += a[l];
    if (cur + sum < 0) break;
    ans = max(ans, cur + sum);
    if (sum >= 0) {
      cur += sum; sum = 0;
      tmp = l-1;
      flag = true;
    }
    l--;
  }
  l = tmp;
  return flag;
}

inline bool right(void) {
  long long sum = 0;
  int tmp = r;
  bool flag = false;
  while (r < n) {
    sum += a[r];
    if (cur + sum < 0) break;
    ans = max(ans, cur + sum);
    if (sum >= 0) {
      cur += sum; sum = 0;
      tmp = r+1;
      flag = true;
    }
    r++;
  }
  r = tmp;
  return flag;
}

void solve(void) {
  cin >> n >> s; s--;
  a.resize(n);
  for (int i=0; i<n; i++) cin >> a[i];

  l = s-1, r = s+1;
  while (left() || right());
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}