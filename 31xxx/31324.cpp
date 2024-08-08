#include <iostream>
using namespace std;

bool solve(void) {
  long long n, m; cin >> n >> m;

  long long k = 1;
  while (n--) {
    k *= 2 * (n+1);
    if (k >= m) return true;
  }
  return false;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "Harshat Mata" : "Nope");
  return 0;
}