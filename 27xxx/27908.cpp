#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, d; cin >> n >> d;
  vector<vector<char>> v((n+d+5)/7+2, vector<char>(23));
  for (int i=0; i<(n+d+5)/7+2; i++) for (int j=0; j<23; j++) {
    if ((i == 0 || i == (n+d+5)/7+1) && (j == 0 || j == 22)) v[i][j] = '+';
    else if (i == 0 || i == (n+d+5)/7+1) v[i][j] = '-';
    else if (j == 0 || j == 22) v[i][j] = '|';
    else v[i][j] = '.';
  }

  for (int i=1; i<=n; i++) {
    int w = (i+d+5) / 7, dd = (i+d+5) % 7;
    if (i >= 10) v[w][3*dd+2] = (i/10) + '0';
    v[w][3*dd+3] = (i%10) + '0';
  }

  for (int i=0; i<(n+d+5)/7+2; i++) {
    for (int j=0; j<23; j++) {
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