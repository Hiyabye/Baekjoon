#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool solve(void) {
  int n; cin >> n;
  vector<vector<int>> v(5, vector<int>(3, 0));
  while (n--) {
    string s; cin >> s;
    v[s[0]-'1'][s[1]-'A']++;
  }

  for (int i=0; i<4; i++) for (int j=0; j<3; j++) if (v[i][j] < 1) return false;
  for (int i=0; i<3; i++) if (v[4][i] < 2) return false;
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "TAK" : "NIE");
  return 0;
}