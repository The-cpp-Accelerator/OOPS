#include <bits/stdc++.h>
using namespace std;

struct dsu{
	vector<int> par;
	vector<int> sz;

	dsu(int n)
	{
		par.resize(n+1);
		sz.resize(n+1);

		for(int i=0; i<=n; i++)
		{
			par[i] = i;
			sz[i] = 1;
		}
	}

    int find(int a)
	{
		if(par[a] == a) 
			return a;
		
		return par[a] = find(par[a]);
	}

	void unite(int a, int b)
	{
		int par_a = find(a);
		int par_b = find(b);

		if(par_a == par_b) 
			return;

		if(sz[par_a] > sz[par_b]){
			sz[par_a] += sz[par_b];
			par[par_b] = par_a;
		}else{
			sz[par_b] += sz[par_a];
			par[par_a] = par_b;
		}
	}
};

int main() {
	int n = 0, m = 0; 
	//cin>>n>>m;

    int x, y, w;
	vector< pair<int , pair<int, int>> > edges;
	for(int i=0; i<m; i++)
	{
	//	cin>>x>>y>>w;
		edges.push_back({w, {x, y}});
    }

	sort(edges.begin(), edges.end());

	dsu ds(n+1);
	int ans = 0;

	for(int i=0; i<m; i++)
	{
		auto curr = edges[i];
		int w = curr.first;
		int x = curr.second.first;
		int y = curr.second.second;

		if(ds.find(x) == ds.find(y)) 
			continue;

		ans += w;
		ds.unite(x, y);
	}

	cout<<ans<<endl;
    cout << "run successfully\n";
	return 0;
}


// modulo inverse
