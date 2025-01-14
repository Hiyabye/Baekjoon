#include <iostream>
using namespace std;

void solve(void) {
  int b; cin >> b;
  int w; cin >> w;
  int p; cin >> p;
  int n; cin >> n;

  if (b >= w) cout << "Watermelon";
  else if (b >= p) cout << "Pomegranates";
  else if (b >= n) cout << "Nuts";
  else cout << "Nothing";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}