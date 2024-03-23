#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  for (int i=n; i>=0; i--) {
    if (i == 0) {
      cout << "No more bottles of beer on the wall, no more bottles of beer.\n";
      cout << "Go to the store and buy some more, " << n << " bottle" << (n > 1 ? "s" : "") << " of beer on the wall.\n";
    } else if (i == 1) {
      cout << "1 bottle of beer on the wall, 1 bottle of beer.\n";
      cout << "Take one down and pass it around, no more bottles of beer on the wall.\n";
    } else {
      cout << i << " bottles of beer on the wall, " << i << " bottles of beer.\n";
      cout << "Take one down and pass it around, " << i-1 << " bottle" << (i > 2 ? "s" : "") << " of beer on the wall.\n";
    }
    cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}