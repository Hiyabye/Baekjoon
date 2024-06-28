#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  vector<int> a(9), b(9);
  for (int i=0; i<9; i++) cin >> a[i];
  for (int i=0; i<9; i++) cin >> b[i];

  int scoreA = 0, scoreB = 0, cur = 0;
  for (int i=0; i<9; i++) {
    scoreA += a[i];
    if (scoreA > scoreB) cur = 1;
    scoreB += b[i];
    if (scoreA < scoreB && cur == 1) cur = 2;
  }
  cout << (cur == 2 ? "Yes" : "No");
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}