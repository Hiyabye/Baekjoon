#include <iostream>
#include <vector>
using namespace std;

void solve(int idx) {
  int r, c; cin >> r >> c;

  vector<vector<char>> v(2*r+1, vector<char>(2*c+1, '.'));
  for (int i=0; i<2*r+1; i+=2) for (int j=0; j<2*c+1; j+=2) v[i][j] = '+';
  for (int i=1; i<2*r+1; i+=2) for (int j=0; j<2*c+1; j+=2) v[i][j] = '|';
  for (int i=0; i<2*r+1; i+=2) for (int j=1; j<2*c+1; j+=2) v[i][j] = '-';
  for (int i=0; i<2; i++) for (int j=0; j<2; j++) v[i][j] = '.';

  cout << "Case #" << idx << ":\n";
  for (int i=0; i<2*r+1; i++) {
    for (int j=0; j<2*c+1; j++) cout << v[i][j];
    cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  for (int i=1; i<=t; i++) solve(i);
  return 0;
}