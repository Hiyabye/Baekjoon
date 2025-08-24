#include <iostream>
using namespace std;

void solve(void) {
  int k; cin >> k;
  
  if (k == 1) {
    cout << "0\n1" << endl;
  } else {
    cout << "1\n1" << endl;
    int x; cin >> x;
    cout << (x ? x : k) << endl;
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}