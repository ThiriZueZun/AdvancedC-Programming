#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

vector<vii> AL;
vi taken;
priority_queue<ii> pq;

void process(int u) {
  taken[u] = 1;
  for (auto &edge : AL[u]) {
    int v = edge.first;
    int w = edge.second;
    if (!taken[v])
      pq.push({-w, -v});
  }
}

int main() {
  freopen("mst_in.txt", "r", stdin);

  int V, E; 
  scanf("%d %d", &V, &E);

  AL.assign(V, vii());
  for (int i = 0; i < E; ++i) {
    int u, v, w; 
    scanf("%d %d %d", &u, &v, &w);
    AL[u].emplace_back(v, w);
    AL[v].emplace_back(u, w);
  }

  taken.assign(V, 0);
  process(0);

  int mst_cost = 0, num_taken = 0;

  while (!pq.empty()) {
    ii front = pq.top();
    pq.pop();

    int w = -front.first;
    int u = -front.second;

    if (taken[u]) continue;

    mst_cost += w;
    process(u);
    ++num_taken;

    if (num_taken == V - 1) break;
  }

  printf("MST cost = %d (Prim's)\n", mst_cost);

  return 0;
}
