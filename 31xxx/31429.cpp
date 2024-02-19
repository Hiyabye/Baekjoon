#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  switch (n) {
    case 1: cout << "12 1600"; break;
    case 2: cout << "11 894"; break;
    case 3: cout << "11 1327"; break;
    case 4: cout << "10 1311"; break;
    case 5: cout << "9 1004"; break;
    case 6: cout << "9 1178"; break;
    case 7: cout << "9 1357"; break;
    case 8: cout << "8 837"; break;
    case 9: cout << "7 1055"; break;
    case 10: cout << "6 556"; break;
    case 11: cout << "6 773"; break;
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}