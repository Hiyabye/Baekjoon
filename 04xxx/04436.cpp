#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int solve(long long n) {
  vector<bool> v(10, false);
  
  long long k = 0;
  while (++k) {
    long long t = n * k;
    while (t) v[t % 10] = true, t /= 10;
    if (count(v.begin(), v.end(), true) == 10) return k;
  }
  return -1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  long long n;
  while (cin >> n) cout << solve(n) << "\n";
  return 0;
}