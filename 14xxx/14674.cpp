#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

struct Game {
  long long i, c, h;
};

inline bool cmp(const Game &a, const Game &b) {
  if (a.h * b.c != b.h * a.c) return a.h * b.c > b.h * a.c;
  if (a.c != b.c) return a.c < b.c;
  return a.i < b.i;
}

void solve(void) {
  int n, k; cin >> n >> k;
  vector<Game> v(n);
  for (int i=0; i<n; i++) cin >> v[i].i >> v[i].c >> v[i].h;
  sort(v.begin(), v.end(), cmp);

  for (int i=0; i<k; i++) {
    cout << v[i].i << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}