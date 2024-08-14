#include <iostream>
#include <vector>
using namespace std;

inline int calc(int a, int p) {
  int ret = 0;
  while (a) {
    int d = a % 10;
    for (int i=1; i<p; i++) d *= a % 10;
    ret += d;
    a /= 10;
  }
  return ret;
}

void solve(void) {
  int a, p; cin >> a >> p;

  vector<int> v; v.push_back(a);
  while (true) {
    int nxt = calc(v.back(), p);
    for (int i=0; i<v.size(); i++) {
      if (v[i] == nxt) {
        cout << i;
        return;
      }
    }
    v.push_back(nxt);
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}