#include <iostream>
using namespace std;

int weight(int n) {
  int cnt = 0, sum = 0;
  while (n) {
    cnt++;
    sum += n % 10;
    n /= 10;
  }
  return cnt * sum;
}

void solve(void) {
  int a, b; cin >> a >> b;

  cout << (weight(a) != weight(b)) + (weight(a) < weight(b));
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}