#include <iostream>
#include <map>
using namespace std;

inline int calc1(const map<int, int> &mp, int k) {
  int mex = 0;
  for (auto &[x, c] : mp) {
    if (x > mex || c <= k) break;
    if (x == mex) mex++;
  }
  return mex;
}

inline int calc2(const map<int, int> &mp, int k) {
  int mex = 0;
  for (auto &[x, _] : mp) {
    if (x == mex) mex++;
    else if (x > mex) {
      while (k > 0 && mex < x) {
        k--;
        mex++;
      }
      if (mex == x) mex++;
      else if (mex < x) return mex;
    }
  }
  return mex + k;
}

void solve(void) {
  int n, k; cin >> n >> k;
  map<int, int> mp;
  while (n--) {
    int a; cin >> a;
    mp[a]++;
  }
  cout << calc1(mp, k) << "\n" << calc2(mp, k);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}