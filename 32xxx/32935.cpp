#include <iostream>
#include <queue>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;

  long long sum = 0;
  priority_queue<long long, vector<long long>, greater<long long>> pq;
  while (n--) {
    long long x; cin >> x;
    sum += x; pq.push(x);
  }

  while (pq.top() < -sum) {
    long long x = pq.top(); pq.pop();
    long long diff = -sum - x;
    x = -sum;
    sum += diff;
  }
  cout << sum;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}