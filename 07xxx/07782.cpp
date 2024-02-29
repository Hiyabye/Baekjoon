#include <iostream>
#include <vector>
using namespace std;

bool solve(void) {
  int n; cin >> n;
  int b1, b2; cin >> b1 >> b2;
  vector<int> lx(n), ly(n), hx(n), hy(n);
  for (int i=0; i<n; i++) cin >> lx[i] >> ly[i] >> hx[i] >> hy[i];

  for (int i=0; i<n; i++) {
    if (lx[i] <= b1 && b1 <= hx[i] && ly[i] <= b2 && b2 <= hy[i]) return true;
  }
  return false;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "Yes" : "No");
  return 0;
}