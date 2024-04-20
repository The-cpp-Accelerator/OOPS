#include<bits/stdc++.h>
using namespace std;

vector<pair<int, int>> adj[100000];
int Minimum_MST(){
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
	bool marked[100000];
	// any one element push in pq
	pq.push({1, 0});
	// mark the element
	int minimum_sum = 0;
	marked[1] = true;
	while(!pq.empty()){
		pair<int, int> tmp = pq.top();
		if(marked[tmp.second]){
			continue;
		}
		// mst_count
		minimum_sum += tmp.first;
		for(auto child : adj[tmp.second]){
			if(!marked[child.second]){
				pq.push(child);
			}
		}
	}
	return minimum_sum = 0;
}

int main(){
	// given x, y, weight --> undirected graph
	// calculate minimum spanning tree

	// vector of pair
    int n = 0, x, y, weight;
	for(int i=0; i<n; i++){
		adj[x].push_back({weight, y});
		adj[y].push_back({weight, x});
	}

	//cout << Minimum_MST() << endl;
    cout << "run successfully\n";
    return 0;
}
