#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool win(vector<string>& v, char c) {
  for (int i=0; i<4; i++) {
    for (int j=0; j<4; j++) {
      if (v[i][j] != c && v[i][j] != 'T') break;
      if (j == 3) return true;
    }
    for (int j=0; j<4; j++) {
      if (v[j][i] != c && v[j][i] != 'T') break;
      if (j == 3) return true;
    }
  }
  for (int i=0; i<4; i++) {
    if (v[i][i] != c && v[i][i] != 'T') break;
    if (i == 3) return true;
  }
  for (int i=0; i<4; i++) {
    if (v[i][3-i] != c && v[i][3-i] != 'T') break;
    if (i == 3) return true;
  }
  return false;
}

bool draw(vector<string>& v) {
  for (int i=0; i<4; i++) {
    for (int j=0; j<4; j++) {
      if (v[i][j] == '.') return false;
    }
  }
  return true;
}

void solve(int idx) {
  vector<string> v(4);
  for (int i=0; i<4; i++) cin >> v[i];

  cout << "Case #" << idx << ": ";
  if (win(v, 'X')) cout << "X won";
  else if (win(v, 'O')) cout << "O won";
  else if (draw(v)) cout << "Draw";
  else cout << "Game has not completed";
  cout << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  int t; cin >> t;
  for (int i=1; i<=t; i++) solve(i);
  return 0;
}