#include <iostream>
using namespace std;

bool solve(void) {
  int y; cin >> y;
  if (y == 0) return false;

  cout << y << " ";
  if (y % 4 || y < 1896) cout << "No summer games";
  else if (y == 1916 || y == 1940 || y == 1944) cout << "Games cancelled";
  else if (y > 2020) cout << "No city yet chosen";
  else cout << "Summer Olympics";
  cout << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}