#include <iostream>
#include <cmath>
using namespace std;

void solve(void) {
  long long n;
  cin >> n;

  int cnt = 0;
  for (int i=2; i<=sqrt(n); i++) {
    while (n % i == 0) {
      n /= i;
      cnt++;
    }
    if (cnt >= 2) break;
  }
  if (n > 1) cnt++;
  
  cout << (cnt == 2 ? "cubelover" : "koosaga");
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}