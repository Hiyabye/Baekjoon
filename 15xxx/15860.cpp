#include <iostream>
#include <random>
using namespace std;

void solve(void) {
  random_device rd;
  mt19937 gen(rd());
  uniform_int_distribution<int> dis(1, 2);

  int x = 0;
  while (x < 99) {
    x += (x % 3 == 0 ? dis(gen) : 3 - x % 3);
    cout << x << endl;
    if (x >= 99) break;
    cin >> x;
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}