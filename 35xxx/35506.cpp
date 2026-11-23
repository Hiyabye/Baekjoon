#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n;
  cin >> n;
  vector<vector<char>> v(2 * n, vector<char>(4 * n + 2, ' '));

  for (int i = 0; i < 2 * n; i++)
    v[2 * n - i - 1][i] = '*';
  for (int i = 0; i < n; i++)
    v[i][3 * n - i] = v[i][3 * n + i + 2] = '*';
  for (int i = 0; i < n; i++)
    v[2 * n - i - 1][3 * n - i] = v[2 * n - i - 1][3 * n + i + 2] = '*';

  for (int i = 0; i < 2 * n; i++) {
    for (int j = 0; j < 4 * n + 2; j++) {
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
