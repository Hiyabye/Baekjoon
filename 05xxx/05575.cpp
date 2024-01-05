#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  vector<vector<int> > v(3, vector<int>(6));
  for (int i=0; i<3; i++) for (int j=0; j<6; j++) cin >> v[i][j];

  for (int i=0; i<3; i++) {
    int h = v[i][3] - v[i][0];
    int m = v[i][4] - v[i][1];
    int s = v[i][5] - v[i][2];

    if (s < 0) s += 60, m--;
    if (m < 0) m += 60, h--;
    cout << h << " " << m << " " << s << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}