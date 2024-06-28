#include <iostream>
using namespace std;

void solve(void) {
  int l; cin >> l;

  if (l >= 620) cout << "Red";
  else if (l >= 590) cout << "Orange";
  else if (l >= 570) cout << "Yellow";
  else if (l >= 495) cout << "Green";
  else if (l >= 450) cout << "Blue";
  else if (l >= 425) cout << "Indigo";
  else cout << "Violet";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}