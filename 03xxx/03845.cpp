#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool solve(void) {
  int nx, ny; double w; cin >> nx >> ny >> w;
  if (nx == 0 && ny == 0 && w == 0) return false;

  vector<double> xi(nx), yi(ny);
  for (int i=0; i<nx; i++) cin >> xi[i];
  for (int i=0; i<ny; i++) cin >> yi[i];

  sort(xi.begin(), xi.end());
  sort(yi.begin(), yi.end());

  double x = 0, y = 0;
  for (int i=0; i<nx; i++) {
    if (xi[i] - x > w / 2) { cout << "NO\n"; return true; }
    x = xi[i] + w / 2;
  }
  for (int i=0; i<ny; i++) {
    if (yi[i] - y > w / 2) { cout << "NO\n"; return true; }
    y = yi[i] + w / 2;
  }

  cout << (x >= 75 && y >= 100 ? "YES" : "NO") << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}