#include <iostream>
using namespace std;

void solve(void){
  int n; cin >> n;

  cout << "YES\n";
  for (int i=1; i<=n; i++) {
    switch (i % 4) {
      case 0: cout << i; break;
      case 1: cout << i + (n % 4 == 2); break;
      case 2: cout << i + (n % 4 != 2 ? 1 : -1); break;
      case 3: cout << i - (n % 4 != 2); break;
    }
    cout << " ";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}