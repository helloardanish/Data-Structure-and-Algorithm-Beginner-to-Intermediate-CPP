// Commutable Islands

/*

https://www.interviewbit.com/problems/commutable-islands/

*/



void makeSet(int N, int parent[]){
    for(int i=1;i<=N;i++){
        parent[i] = i;
    }
}

int find(int i, int parent[]){
    while(parent[i] != i){
        i = parent[i];
    }
    return i;
}

bool cmp(vector<int> A, vector<int> B){
    return A[2] < B[2];
}

int Solution::solve(int N, vector<vector<int> > &edges) {
    sort(edges.begin(), edges.end(), cmp);  /// sorting edges on basis of weights
    
    int parent[N+1];
    makeSet(N, parent);
    int cost = 0;
    for(int i=0;i<edges.size();i++){
        int s = edges[i][0];
        int d = edges[i][1];
        int rS = find(s, parent);
        int rD = find(d, parent);
        if(rS != rD){
            cost += edges[i][2];
            parent[rS] = rD;  /// Union
        }
    }
    return cost;
}
