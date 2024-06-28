#include <iostream>
using namespace std;

void solve(void) {
  int d, m;
  cin >> d >> m;

  int ans = d;
  switch (m) {
    case 12: ans += 30;
    case 11: ans += 31;
    case 10: ans += 30;
    case 9: ans += 31;
    case 8: ans += 31;
    case 7: ans += 30;
    case 6: ans += 31;
    case 5: ans += 30;
    case 4: ans += 31;
    case 3: ans += 28;
    case 2: ans += 31;
  }

  switch (ans % 7) {
    case 0: cout << "Wednesday\n"; break;
    case 1: cout << "Thursday\n"; break;
    case 2: cout << "Friday\n"; break;
    case 3: cout << "Saturday\n"; break;
    case 4: cout << "Sunday\n"; break;
    case 5: cout << "Monday\n"; break;
    case 6: cout << "Tuesday\n"; break;
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}