#include <iostream>
#include <vector>
using namespace std;

const char* const YES =
"|>___/|        /}\n"
"| O < |       / }\n"
"(==0==)------/ }\n"
"| ^  _____    |\n"
"|_|_/     ||__|\n";

const char* const NO =
"|>___/|     /}\n"
"| O O |    / }\n"
"( =0= )\"\"\"\"  \\\n"
"| ^  ____    |\n"
"|_|_/    ||__|";

void solve(void) {
  int r, c; cin >> r >> c;
  vector<vector<int>> a(r, vector<int>(c)), b(r, vector<int>(c));
  for (int i=0; i<c; i++) for (int j=0; j<r; j++) cin >> a[j][c-i-1];
  for (int i=0; i<r; i++) for (int j=0; j<c; j++) cin >> b[i][j];

  cout << (a == b ? YES : NO);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}