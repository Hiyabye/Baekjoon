#include <iostream>
#include <string>
#include <utility>
#include <vector>
using namespace std;

void solve(void) {
  vector<vector<int>> a(5, vector<int>(5)), b(5, vector<int>(5));
  for (int i=0; i<5; i++) for (int j=0; j<5; j++) cin >> a[i][j];
  for (int i=0; i<5; i++) for (int j=0; j<5; j++) cin >> b[i][j];

  vector<vector<int>> c(5, vector<int>(5, 0));
  for (int i=0; i<5; i++) for (int j=0; j<5; j++) for (int k=0; k<5; k++) {
    c[i][j] += a[i][k] * b[k][j];
  }

  vector<pair<int, string>> ans = {
    {0, "Inseo"},
    {0, "Junsuk"},
    {0, "Jungwoo"},
    {0, "Jinwoo"},
    {0, "Youngki"}
  };

  for (int i=0; i<5; i++) for (int j=0; j<5; j++) {
    ans[i].first += c[i][j];
  }

  pair<int, string> winner = ans[0];
  for (int i=1; i<5; i++) {
    if (ans[i].first <= winner.first) winner = ans[i];
  }
  cout << winner.second;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}