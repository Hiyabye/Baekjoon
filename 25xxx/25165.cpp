#include <iostream>
using namespace std;

bool solve(void) {
  int n, m; cin >> n >> m;
  int ac, d; cin >> ac >> d;
  int sr, sc; cin >> sr >> sc;

  return n % 2 != d && n == sr;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "YES!" : "NO...");
  return 0;
}