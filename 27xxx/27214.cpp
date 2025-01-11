#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int k, w, h, t; cin >> k >> w >> h >> t;

  vector<vector<char>> v(k*h+t*(h+1), vector<char>(k*w+t*(w+1), '*'));
  for (int i=0; i<h; i++) for (int j=0; j<w; j++) {
    for (int a=0; a<k; a++) for (int b=0; b<k; b++) {
      v[k*i+t*(i+1)+a][k*j+t*(j+1)+b] = '.';
    }
  }

  for (int i=0; i<k*h+t*(h+1); i++) {
    for (int j=0; j<k*w+t*(w+1); j++) {
      cout << v[i][j];
    }
    cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}