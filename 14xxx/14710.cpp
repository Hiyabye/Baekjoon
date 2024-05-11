#include <iostream>
using namespace std;

bool solve(void) {
  int t1, t2; cin >> t1 >> t2;

  return (t1 % 30) * 12 == t2;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? 'O' : 'X');
  return 0;
}