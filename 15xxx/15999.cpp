#include <iostream>
#include <vector>
#define MOD 1000000007
using namespace std;

int dy[4] = {0, 0, -1, 1};
int dx[4] = {-1, 1, 0, 0};

long long power(long long base, long long exp) {
  long long ret = 1;
  while (exp) {
    if (exp & 1) ret = ret * base % MOD;
    base = base * base % MOD;
    exp >>= 1;
  }
  return ret;
}

void solve(void) {
  int n, m; cin >> n >> m;
  vector<vector<char>> v(n, vector<char>(m));
  for (int i=0; i<n; i++) for (int j=0; j<m; j++) cin >> v[i][j];

  int ans = n * m;
  for (int i=0; i<n; i++) for (int j=0; j<m; j++) for (int k=0; k<4; k++) {
    int ny = i + dy[k], nx = j + dx[k];
    if (ny < 0 || ny >= n || nx < 0 || nx >= m || v[i][j] == v[ny][nx]) continue;
    ans--;
    break;
  }
  cout << power(2, ans);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}