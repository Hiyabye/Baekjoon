#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void sort(int &a, int &b, int &c) {
  if (a > b) swap(a, b);
  if (b > c) swap(b, c);
  if (a > b) swap(a, b);
}

void solve(void) {
  vector<int> a, b, c;

  int x, y, z;
  while (cin >> x >> y >> z) {
    a.push_back(x);
    b.push_back(y);
    c.push_back(z);
  }

  vector<int> ans(4, 0);
  for (int i=0; i<a.size(); i++) {
    sort(a[i], b[i], c[i]);
    if (a[i] + b[i] <= c[i]) break;
    ans[0]++;
    if (a[i]*a[i] + b[i]*b[i] == c[i]*c[i]) ans[1]++;
    if (a[i]*a[i] + b[i]*b[i] > c[i]*c[i]) ans[2]++;
    if (a[i]*a[i] + b[i]*b[i] < c[i]*c[i]) ans[3]++;
  }

  for (int i=0; i<4; i++) {
    cout << ans[i] << " ";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}