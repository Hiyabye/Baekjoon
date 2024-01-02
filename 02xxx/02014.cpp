#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void solve(void) {
  int k, n;
  cin >> k >> n;
  vector<int> a(k);
  for (int i=0; i<k; i++) {
    cin >> a[i];
  }

  priority_queue<long long, vector<long long>, greater<long long> > pq;
  for (int i=0; i<k; i++) {
    pq.push(a[i]);
  }

  long long ans = 0;
  for (int i=0; i<n-1; i++) {
    long long cur = pq.top();
    pq.pop();
    for (int j=0; j<k; j++) {
      pq.push(cur * a[j]);
      if (cur % a[j] == 0) break;
    }
  }
  cout << pq.top();
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}