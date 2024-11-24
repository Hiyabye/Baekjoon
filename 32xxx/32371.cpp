#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  vector<string> v(4);
  for (int i=0; i<4; i++) cin >> v[i];
  string s; cin >> s;

  int y = 0, x = 0;
  for (char c : s) {
    bool flag = true;
    for (int i=0; i<4 && flag; i++) for (int j=0; j<10 && flag; j++) {
      if (v[i][j] == c) {
        y += i; x += j;
        flag = false;
      }
    }
  }
  cout << v[y / 9][x / 9];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}