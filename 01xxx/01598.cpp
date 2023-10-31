#include <iostream>
#include <cmath>
using namespace std;

void solve(void) {
  int a, b; cin >> a >> b;

  cout << abs((a-1)/4-(b-1)/4) + abs((a-1)%4-(b-1)%4);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  solve();
  return 0;
}