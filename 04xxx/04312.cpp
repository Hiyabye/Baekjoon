#include <iostream>
using namespace std;
using int128 = __int128;

int128 power(int128 a, int128 b) {
  int128 ret = 1;
  while (b) {
    if (b & 1) ret *= a;
    a *= a;
    b >>= 1;
  }
  return ret;
}

void print(int128 n) {
  if (n == 0) return;
  print(n / 10);
  cout << (char)(n % 10 + '0');
}

bool solve(void) {
  unsigned long long n; cin >> n; n--;
  if (n == -1) return false;

  cout << "{";
  bool first = true;
  for (int i=0; i<64; i++) {
    if (n & (1ULL << i)) {
      if (!first) cout << ",";
      first = false;
      cout << " ";
      print(power(3, i));
    }
  }
  cout << " }\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}