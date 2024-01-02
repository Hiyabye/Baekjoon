#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

long long process(vector<long long> &a) {
  long long sum = 0;

  for (int i=0; i<a.size(); i++) {
    sum += a[i];
  }
  return pow(2, (int)log2(sum));
}

void solve(void) {
  int q;
  cin >> q;

  vector<long long> a;
  while (q--) {
    char sign;
    long long num;
    cin >> sign >> num;

    if (sign == '+') a.push_back(num);
    else a.erase(find(a.begin(), a.end(), num));
    cout << process(a) << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}