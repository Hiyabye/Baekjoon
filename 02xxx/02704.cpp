#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  string s; cin >> s;

  vector<int> a(3);
  for (int i=0; i<3; i++) {
    a[i] = stoi(s.substr(i*3, 2));
  }

  vector<vector<int>> b(3, vector<int>(6));
  for (int i=0; i<3; i++) {
    for (int j=0; j<6; j++) {
      b[i][j] = (a[i] >> (5-j)) & 1;
    }
  }

  for (int i=0; i<6; i++) for (int j=0; j<3; j++) cout << b[j][i];
  cout << " ";
  for (int i=0; i<3; i++) for (int j=0; j<6; j++) cout << b[i][j];
  cout << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  while (n--) solve();
  return 0;
}