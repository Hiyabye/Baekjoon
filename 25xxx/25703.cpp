#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  cout << "int a;\n";
  for (int i=1; i<=n; i++) {
    cout << "int ";
    for (int j=0; j<i; j++) cout << "*";
    cout << "ptr";
    if (i != 1) cout << i;
    cout << " = &";
    if (i == 1) cout << "a";
    else if (i == 2) cout << "ptr";
    else cout << "ptr" << i-1;
    cout << ";\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}