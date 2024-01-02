#include <iostream>
using namespace std;

void solve(int tc) {
  int n; cin >> n;

  cout << "Case #" << tc << ": ";
  if (n <= 25) cout << "World Finals\n";
  else if (n <= 1000) cout << "Round 3\n";
  else if (n <= 4500) cout << "Round 2\n";
  else cout << "Round 1\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  int tc; cin >> tc;
  for (int i=1; i<=tc; i++) solve(i);
  return 0;
}