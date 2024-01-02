#include <iostream>
using namespace std;

void solve(void) {
  int n, d;
  cin >> n >> d;

  if (n & 1) {
    for (int i=d-(n-1)/2; i<=d+(n-1)/2; i++) cout << i << " ";
  } else {
    for (int i=d-n/2; i<=d-1; i++) cout << i << " ";
    for (int i=d+1; i<=d+n/2; i++) cout << i << " ";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}