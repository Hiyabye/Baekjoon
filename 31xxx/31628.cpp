#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool solve(void) {
  vector<vector<string>> v(10, vector<string>(10));
  for (int i=0; i<10; i++) for (int j=0; j<10; j++) cin >> v[i][j];
  
  for (int i=0; i<10; i++) {
    bool flag = true;
    for (int j=1; j<10; j++) if (v[i][j] != v[i][j-1]) flag = false;
    if (flag) return true;
    flag = true;
    for (int j=1; j<10; j++) if (v[j][i] != v[j-1][i]) flag = false;
    if (flag) return true;
  }
  return false;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}