#include <iostream>
#include <vector>
using namespace std;

inline void space(int x) {
  if (x < 10) cout << " ";
  if (x < 100) cout << " ";
  cout << x;
}

void solve(void) {
  vector<vector<int>> v(16, vector<int>(3));
  for (int i=0; i<16; i++) for (int j=0; j<3; j++) cin >> v[i][j];

  int a, b, c;
  while (cin >> a >> b >> c) {
    space(a); cout << " ";
    space(b); cout << " ";
    space(c); cout << " ";
    cout << "maps to ";

    int ans = 0;
    for (int i=1; i<16; i++) {
      int d = (v[ans][0] - a) * (v[ans][0] - a) + (v[ans][1] - b) * (v[ans][1] - b) + (v[ans][2] - c) * (v[ans][2] - c);
      int e = (v[i][0] - a) * (v[i][0] - a) + (v[i][1] - b) * (v[i][1] - b) + (v[i][2] - c) * (v[i][2] - c);
      if (e < d) ans = i;
    }

    space(v[ans][0]); cout << " ";
    space(v[ans][1]); cout << " ";
    space(v[ans][2]); cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}