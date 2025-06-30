#include <iostream>
#include <vector>
using namespace std;

inline bool check(const vector<int> &v, int x, int y) {
  return v[x] == v[x+1] && v[x] == v[x+2] && v[x] == v[x+3] &&
         v[y] == v[y+1] && v[y] == v[y+2] && v[y] == v[y+3];
}

inline void cycle1(vector<int> &v, int a, int b, int c, int d) {
  int tmp = v[a];
  v[a] = v[b];
  v[b] = v[c];
  v[c] = v[d];
  v[d] = tmp;
}

inline void cycle2(vector<int> &v, int a, int b, int c, int d) {
  int tmp = v[d];
  v[d] = v[c];
  v[c] = v[b];
  v[b] = v[a];
  v[a] = tmp;
}

bool solve(void) {
  vector<int> v(24);
  for (int i=0; i<24; i++) cin >> v[i];

  if (check(v, 0, 8)) {
    cycle1(v, 14, 6, 18, 22); cycle1(v, 15, 7, 19, 23);
    if (check(v, 12, 16) && check(v, 4, 20)) return true;
    cycle2(v, 14, 6, 18, 22); cycle2(v, 15, 7, 19, 23);
    cycle2(v, 14, 6, 18, 22); cycle2(v, 15, 7, 19, 23);
    if (check(v, 12, 16) && check(v, 4, 20)) return true;
  } else if (check(v, 12, 16)) {
    cycle1(v, 0, 4, 8, 23); cycle1(v, 2, 6, 10, 21);
    if (check(v, 0, 8) && check(v, 4, 20)) return true;
    cycle2(v, 0, 4, 8, 23); cycle2(v, 2, 6, 10, 21);
    cycle2(v, 0, 4, 8, 23); cycle2(v, 2, 6, 10, 21);
    if (check(v, 0, 8) && check(v, 4, 20)) return true;
  } else if (check(v, 4, 20)) {
    cycle1(v, 0, 17, 11, 14); cycle1(v, 1, 19, 10, 12);
    if (check(v, 0, 8) && check(v, 12, 16)) return true;
    cycle2(v, 0, 17, 11, 14); cycle2(v, 1, 19, 10, 12);
    cycle2(v, 0, 17, 11, 14); cycle2(v, 1, 19, 10, 12);
    if (check(v, 0, 8) && check(v, 12, 16)) return true;
  }
  return false;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}