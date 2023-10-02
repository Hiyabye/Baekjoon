#include <iostream>
#include <vector>
#include <string>
using namespace std;

void solve(void) {
  int r, c, zr, zc; cin >> r >> c >> zr >> zc;
  vector<string> v(r);
  for (int i=0; i<r; i++) cin >> v[i];

  for (int i=0; i<r; i++) {
    for (int j=0; j<zr; j++) {
      for (int k=0; k<c; k++) {
        for (int l=0; l<zc; l++) {
          cout << v[i][k];
        }
      }
      cout << "\n";
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  solve();
  return 0;
}