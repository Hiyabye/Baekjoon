#include <iostream>
#include <string>
#include <utility>
#include <vector>
using namespace std;

pair<int, int> heart(int n, vector<string>& a) {
  for (int i=0; i<n; i++) {
    for (int j=0; j<n; j++) {
      if (a[i][j] == '*') return make_pair(i+1, j);
    }
  }
  return make_pair(-1, -1);
}

void solve(void) {
  int n; cin >> n;
  vector<string> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  pair<int, int> h = heart(n, a);
  int l = 0, r = 0, b = 0, ll = 0, rr = 0;
  for (int i=h.second-1; i>=0; i--) if (a[h.first][i] == '*') l++;
  for (int i=h.second+1; i<n; i++) if (a[h.first][i] == '*') r++;
  for (int i=h.first+1; i<n; i++) if (a[i][h.second] == '*') b++;
  for (int i=h.first+b+1, j=h.second-1; i<n; i++) if (a[i][j] == '*') ll++;
  for (int i=h.first+b+1, j=h.second+1; i<n; i++) if (a[i][j] == '*') rr++;

  cout << h.first+1 << " " << h.second+1 << "\n";
  cout << l << " " << r << " " << b << " " << ll << " " << rr;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}