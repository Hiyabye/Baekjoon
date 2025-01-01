#include <iomanip>
#include <iostream>
using namespace std;

bool solve(int s, int m) {
  int seed = 0;
  for (int i=1; i<m; i++) {
    seed = (seed + s) % m;
    if (!seed) return false;
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int s, m;
  while (cin >> s >> m) {
    cout << setw(10) << s << setw(10) << m << " ";
    cout << (solve(s, m) ? "Good" : "Bad") << " Choice\n\n";
  }
  return 0;
}