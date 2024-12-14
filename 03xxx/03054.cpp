#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  string s; cin >> s;

  vector<vector<char>> v(5, vector<char>(4*s.length()+1, '.'));
  for (int i=0; i<s.length(); i++) {
    v[0][4*i+2] = v[1][4*i+1] = v[1][4*i+3] = v[2][4*i] = '#';
    v[2][4*i+2] = s[i];
    v[2][4*i+4] = v[3][4*i+1] = v[3][4*i+3] = v[4][4*i+2] = '#';
  }
  for (int i=2; i<s.length(); i+=3) {
    v[0][4*i+2] = v[1][4*i+1] = v[1][4*i+3] = v[2][4*i] = '*';
    v[2][4*i+2] = s[i];
    v[2][4*i+4] = v[3][4*i+1] = v[3][4*i+3] = v[4][4*i+2] = '*';
  }

  for (int i=0; i<5; i++) {
    for (int j=0; j<4*s.length()+1; j++) {
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