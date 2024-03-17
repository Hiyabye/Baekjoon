#include <iostream>
using namespace std;

char calc(int r, int g, int b) {
  int i = 2126 * r + 7152 * g + 722 * b;
  
  if (i < 510000) return '#';
  if (i < 1020000) return 'o';
  if (i < 1530000) return '+';
  if (i < 2040000) return '-';
  return '.';
}

void solve(void) {
  int n, m; cin >> n >> m;

  for (int i=0; i<n; i++) {
    for (int j=0; j<m; j++) {
      int r, g, b; cin >> r >> g >> b;
      cout << calc(r, g, b);
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