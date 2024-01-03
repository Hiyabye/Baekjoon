#include <iostream>
#include <random>
using namespace std;

void solve(void) {
  int n; cin >> n;
  random_device rd;
  mt19937 gen(rd());
  uniform_int_distribution<int> dis(1, n);

  for (int i=1; i<=20000; i++) {
    int x = dis(gen);
    cout << "? " << x << endl;
    char c; cin >> c;
    if (c == 'Y') {
      cout << "! " << x << endl;
      break;
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  solve();
  return 0;
}