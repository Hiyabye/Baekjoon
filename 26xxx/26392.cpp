#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool check(const vector<string> &v, int s, int i) {
  for (int j=0; j<s; j++) {
    if (v[i][j] == '#') return true;
  }
  return false;
}

void solve(int r, int s) {
  vector<string> v(r);
  for (int i=0; i<r; i++) cin >> v[i];

  int a = 0, b = r-1;
  while (a < r && !check(v, s, a)) a++;
  while (b >= 0 && !check(v, s, b)) b--;
  cout << b - a << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, r, s; cin >> n >> r >> s;
  while (n--) solve(r, s);
  return 0;
}