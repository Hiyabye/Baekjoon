#include <iostream>
using namespace std;

void solve(void) {
  int n, k; cin >> n >> k;

  for (int i=0; i<k; i++) {
    int g; cin >> g;
    int p = (g * 100) / n;
    if (p <= 4) cout << "1 ";
    else if (p <= 11) cout << "2 ";
    else if (p <= 23) cout << "3 ";
    else if (p <= 40) cout << "4 ";
    else if (p <= 60) cout << "5 ";
    else if (p <= 77) cout << "6 ";
    else if (p <= 89) cout << "7 ";
    else if (p <= 96) cout << "8 ";
    else cout << "9 ";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}