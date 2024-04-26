#include <iostream>
#include <map>
#include <vector>
using namespace std;

int calc(int n, int m, int k, int x, int y, vector<vector<char>> &board) {
  map<char, int> cnt;
  for (int i=x; i<n; i+=k) {
    for (int j=y; j<m; j+=k) {
      cnt[board[i][j]]++;
    }
  }

  int max_cnt = 0;
  char max_char = 0;
  for (auto &p : cnt) {
    if (p.second > max_cnt) {
      max_cnt = p.second;
      max_char = p.first;
    }
  }

  for (int i=x; i<n; i+=k) {
    for (int j=y; j<m; j+=k) {
      board[i][j] = max_char;
    }
  }

  int total = 0;
  for (auto &p : cnt) {
    total += p.second;
  }
  return total - max_cnt;
}

void solve(void) {
  int n, m, k; cin >> n >> m >> k;
  vector<vector<char>> board(n, vector<char>(m));
  for (int i=0; i<n; i++) for (int j=0; j<m; j++) cin >> board[i][j];

  int ans = 0;
  for (int i=0; i<k; i++) {
    for (int j=0; j<k; j++) {
      ans += calc(n, m, k, i, j, board);
    }
  }

  cout << ans << "\n";
  for (int i=0; i<n; i++) {
    for (int j=0; j<m; j++) {
      cout << board[i][j];
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