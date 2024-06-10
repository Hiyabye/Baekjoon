#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  vector<string> v(5);
  for (int i=0; i<5; i++) cin >> v[i];

  for (int i=0; i<v[0].length(); i++) {
    if (v[2][i] == 'm') {
      v[0][i] = 'o'; v[1][i] = 'w'; v[2][i] = 'l'; v[3][i] = 'n'; v[4][i] = '.';
    } else if (v[2][i] == 'l') {
      v[0][i] = '.'; v[1][i] = 'o'; v[2][i] = 'm'; v[3][i] = 'l'; v[4][i] = 'n';
    } else {
      v[0][i] = '.'; v[1][i] = '.'; v[2][i] = 'o'; v[3][i] = 'L'; v[4][i] = 'n';
    }
  }

  for (int i=0; i<5; i++) {
    for (int j=0; j<v[0].length(); j++) {
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