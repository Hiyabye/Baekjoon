#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  vector<int> v(4), p;
  for (int i=0; i<4; i++) cin >> v[i];

  vector<bool> ok(5, false);
  for (int i=0; i<4; i++) {
    if (v[i]) ok[v[i]] = true;
    else p.push_back(i+1);
  }

  if (p.size() == 0) {
    cout << v[0] << " " << v[1];
  } else if (p.size() == 1) {
    for (int i=1; i<=4; i++) {
      if (ok[i]) continue;
      cout << p[0] << " " << i;
      break;
    }
  } else if (p.size() == 2) {
    vector<int> m;
    for (int i=1; i<=4; i++) {
      if (!ok[i]) m.push_back(i);
    }
    cout << m[0] << " " << m[1];
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}