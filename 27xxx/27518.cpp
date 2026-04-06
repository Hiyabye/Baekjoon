#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <vector>
#define MOD 1000000007
using namespace std;

inline long long modadd(long long a, long long b) {
  return (a + b) % MOD;
}

inline long long modsub(long long a, long long b) {
  return (a - b + MOD) % MOD;
}

template <typename T>
class SegmentTree {
private:
  vector<T> tree;
  vector<T> arr;
  int n;
  T (*func)(T, T);

  void init(int node, int start, int end) {
    if (start == end) {
      tree[node] = arr[start];
    } else {
      init(node*2, start, (start+end)/2);
      init(node*2+1, (start+end)/2+1, end);
      tree[node] = func(tree[node*2], tree[node*2+1]);
    }
  }

  T query(int node, int start, int end, int left, int right) {
    if (left > end || right < start) return 0;
    if (left <= start && end <= right) return tree[node];
    T lval = query(node*2, start, (start+end)/2, left, right);
    T rval = query(node*2+1, (start+end)/2+1, end, left, right);
    return func(lval, rval);
  }

  void update(int node, int start, int end, int index, T val) {
    if (index < start || index > end) return;
    if (start == end) {
      arr[index] = val;
      tree[node] = val;
      return;
    }
    update(node*2, start, (start+end)/2, index, val);
    update(node*2+1, (start+end)/2+1, end, index, val);
    tree[node] = func(tree[node*2], tree[node*2+1]);
  }

public:
  SegmentTree(vector<T> &arr, T (*f)(T, T)) : arr(arr), func(f) {
    n = arr.size();
    int h = (int)ceil(log2(n));
    int tree_size = (1 << (h+1));
    tree.resize(tree_size);
    init(1, 0, n-1);
  }

  T query(int left, int right) {
    return query(1, 0, n-1, left, right);
  }

  void update(int index, T val) {
    update(1, 0, n-1, index, val);
  }
};

long long add(long long a, long long b) {
  return modadd(a, b);
}

void solve(void) {
  int n; cin >> n;
  vector<long long> b(n);
  for (int i=0; i<n; i++) cin >> b[i];

  map<int, int> rank; int idx = 0;
  for (int i=0; i<n; i++) rank[b[i]] = 1;
  for (auto &p : rank) p.second = idx++;

  int m = rank.size();
  vector<long long> cnt(m, 0), sum(m, 0);
  SegmentTree<long long> st1(cnt, add), st2(sum, add);

  vector<long long> d(n, 0);
  for (int i=0; i<n; i++) {
    int r = rank[b[i]];
    d[i] = modsub(st2.query(r+1, m-1), st1.query(r+1, m-1) * b[i] % MOD);
    cnt[r] = modadd(cnt[r], 1);
    st1.update(r, cnt[r]);
    sum[r] = modadd(sum[r], b[i]);
    st2.update(r, sum[r]);
  }
  for (int i=1; i<n; i++) d[i] = modadd(d[i], d[i-1]);

  for (int i=0; i<n; i++) {
    cout << d[i] << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}