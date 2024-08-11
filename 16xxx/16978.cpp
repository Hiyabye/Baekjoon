#include <algorithm>
#include <cmath>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

struct Query {
  int k, i, j;
  int idx;
};

bool cmp(const Query &a, const Query &b) {
  if (a.k != b.k) return a.k < b.k;
  return a.idx < b.idx;
}

template <typename T>
class SegmentTree {
private:
  int n, h, sz;
  vector<T> arr;
  vector<T> tree;
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

  void update(int node, int start, int end, int idx, T val) {
    if (idx < start || idx > end) return;
    if (start == end) {
      arr[idx] = val;
      tree[node] = val;
    } else {
      update(node*2, start, (start+end)/2, idx, val);
      update(node*2+1, (start+end)/2+1, end, idx, val);
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

public:
  SegmentTree(vector<T> &arr, T (*f)(T, T)) : arr(arr), func(f) {
    this->n = arr.size();
    this->h = (int)ceil(log2(n));
    this->sz = (1 << (h+1));
    this->tree.resize(sz);
    init(1, 0, n-1);
  }

  void update(int idx, T val) {
    update(1, 0, n-1, idx, val);
  }

  T query(int left, int right) {
    return query(1, 0, n-1, left, right);
  }
};

long long add(long long a, long long b) {
  return a + b;
}

void solve(void) {
  int n; cin >> n;
  vector<long long> arr(n);
  for (int i=0; i<n; i++) cin >> arr[i];
  SegmentTree<long long> st(arr, add);

  int m; cin >> m;
  vector<pair<int, long long>> one;
  vector<Query> two;

  while (m--) {
    int op; cin >> op;
    if (op == 1) {
      int i, v; cin >> i >> v; i--;
      one.push_back({i, v});
    } else if (op == 2) {
      int k, i, j; cin >> k >> i >> j; i--, j--;
      two.push_back({k, i, j, (int)two.size()});
    }
  }
  sort(two.begin(), two.end(), cmp);

  int cur = 0;
  vector<long long> ans(two.size());
  for (auto &q : two) {
    while (cur < q.k) {
      auto [i, v] = one[cur++];
      st.update(i, v);
    }
    ans[q.idx] = st.query(q.i, q.j);
  }

  for (auto &a : ans) {
    cout << a << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}