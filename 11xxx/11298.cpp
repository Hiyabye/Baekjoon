#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int a, b; cin >> a >> b;

  vector<vector<char>> v(a*10+b+1, vector<char>(11, ' '));
  for (int i=0; i<=10; i++) v[a*10+b][i] = '*';
  for (int i=0; i<=a*10+b; i++) v[i][0] = '*';
  for (int i=1; i<=10; i++) v[a*(10-i)][i] = '*';

  cout << "y = " << a << "x + " << b << "\n";
  for (int i=0; i<=a*10+b; i++) {
    for (int j=0; j<=10; j++) cout << v[i][j];
    cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  while (n--) solve();
  return 0;
}