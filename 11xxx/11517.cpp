#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

inline int calc1(vector<int> v, int idx) {
  int d = idx < 2 ? v[idx+2] - v[idx+1] : v[idx-1] - v[idx-2];
  v[idx] = idx < 2 ? v[idx+1] - d : v[idx-1] + d;
  if (v[idx] <= 0 || v[idx] > 10000) return -1;
  for (int i=1; i<v.size(); i++) {
    if (v[i] != v[i-1] + d) return -1;
  }
  return v[idx];
}

inline int calc2(vector<int> v, int idx) {
  int d = idx < 2 ? v[idx+2] / v[idx+1] : v[idx-1] / v[idx-2];
  v[idx] = idx < 2 ? v[idx+1] / d : v[idx-1] * d;
  if (v[idx] <= 0 || v[idx] > 10000) return -1;
  for (int i=1; i<v.size(); i++) {
    if (v[i] != v[i-1] * d) return -1;
  }
  return v[idx];
}

bool solve(void) {
  vector<int> v(4);
  for (int i=0; i<4; i++) cin >> v[i];
  if (v[0] == -1 && v[1] == -1 && v[2] == -1 && v[3] == -1) return false;

  int idx = 0;
  for (int i=0; i<4; i++) {
    if (v[i] == -1) idx = i;
  }
  cout << max(calc1(v, idx), calc2(v, idx)) << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}