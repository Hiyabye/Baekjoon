#include <iostream>
#include <vector>
using namespace std;

inline int calc1(int n, const vector<int> &v) {
  int cnt = 0;
  for (int i=0; i<14; i++) {
    cnt += n / v[i];
    n %= v[i];
  }
  return cnt * v[13] + n;
}

inline int calc2(int n, const vector<int> &v) {
  int cnt = 0;
  for (int i=3; i<14; i++) {
    if (v[i] > v[i-1] && v[i-1] > v[i-2] && v[i-2] > v[i-3]) {
      n += cnt * v[i];
      cnt = 0;
    }
    if (v[i] < v[i-1] && v[i-1] < v[i-2] && v[i-2] < v[i-3]) {
      cnt += n / v[i];
      n %= v[i];
    }
  }
  return cnt * v[13] + n;
}

void solve(void) {
  int n; cin >> n;
  vector<int> v(14);
  for (int i=0; i<14; i++) cin >> v[i];

  int a = calc1(n, v), b = calc2(n, v);
  cout << (a > b ? "BNP" : a < b ? "TIMING" : "SAMESAME");
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}