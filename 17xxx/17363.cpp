#include <iostream>
#include <string>
#include <vector>
using namespace std;

char rotate(const char c) {
  if (c == '.') return '.';
  if (c == 'O') return 'O';
  if (c == '-') return '|';
  if (c == '|') return '-';
  if (c == '/') return '\\';
  if (c == '\\') return '/';
  if (c == '^') return '<';
  if (c == '<') return 'v';
  if (c == 'v') return '>';
  if (c == '>') return '^';
  return c;
}

void solve(void) {
  int n, m; cin >> n >> m;
  cin.ignore();
  vector<string> v(n);
  for (int i=0; i<n; i++) cin >> v[i];

  for (int i=0; i<m; i++) {
    for (int j=0; j<n; j++) {
      cout << rotate(v[j][m-i-1]);
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