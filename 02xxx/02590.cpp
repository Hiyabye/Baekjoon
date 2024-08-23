#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

inline bool five(vector<int> &a) {
  if (a[5] <= 0) return false;
  int rem = 11; a[5]--;
  a[1] = max(0, a[1] - rem);
  return true;
}

inline bool four(vector<int> &a) {
  if (a[4] <= 0) return false;
  int rem = 20 - 4 * min(5, a[2]); a[4]--;
  a[2] = max(0, a[2] - 5);
  a[1] = max(0, a[1] - rem);
  return true;
}

inline bool three(vector<int> &a) {
  if (a[3] <= 0) return false;
  int rem = 36 - 9 * min(4, a[3]);
  a[3] = max(0, a[3] - 4);
  if (rem == 27) {
    rem -= 4 * min(5, a[2]);
    a[2] = max(0, a[2] - 5);
  } else if (rem == 18) {
    rem -= 4 * min(3, a[2]);
    a[2] = max(0, a[2] - 3);
  } else if (rem == 9) {
    rem -= 4 * min(1, a[2]);
    a[2] = max(0, a[2] - 1);
  }
  a[1] = max(0, a[1] - rem);
  return true;
}

inline bool two(vector<int> &a) {
  if (a[2] <= 0) return false;
  int rem = 36 - 4 * min(9, a[2]);
  a[2] = max(0, a[2] - 9);
  a[1] = max(0, a[1] - rem);
  return true;
}

inline bool one(vector<int> &a) {
  if (a[1] <= 0) return false;
  a[1] = max(0, a[1] - 36);
  return true;
}

void solve(void) {
  vector<int> a(7, 0);
  for (int i=1; i<=6; i++) cin >> a[i];

  int ans = a[6];
  while (five(a)) ans++;
  while (four(a)) ans++;
  while (three(a)) ans++;
  while (two(a)) ans++;
  while (one(a)) ans++;
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  solve();
  return 0;
}