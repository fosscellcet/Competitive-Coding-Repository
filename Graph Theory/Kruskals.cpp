#include<bits/stdc++.h>
using namespace std;

class Edge{
    public:
    int src;
    int dest;
    int weight;
};

bool compare(Edge e1, Edge e2){
    return e1.weight < e2.weight;
}

int getParent(int v, int* parent){
    if(parent[v] == v){
        return v;
    }
    return getParent(parent[v], parent);
}

Edge* kruskals(Edge* edges, int n, int e){
    sort(edges, edges+e, compare);
    Edge* output = new Edge[n-1];
    int* parent = new int[n-1];
    for(int i=0; i<n; i++){
        parent[i] = i;
    }
    int i=0,count = 0;
    while(count < (n-1)){
        Edge currEdge = edges[i];
        int srcParent = getParent(currEdge.src, parent);
        int destParent = getParent(currEdge.dest, parent);
        if(srcParent != destParent){
            output[count] = currEdge;
            count++;
            parent[srcParent] = destParent;
        }
        i++;
    }
    return output;
}

int main(){
    int n,e;
    cin >> n >> e;
    Edge* edges = new Edge[e];

    for(int i=0; i<e; i++){
        cin >> edges[i].src >> edges[i].dest >> edges[i].weight;
    }
    Edge* output = kruskals(edges, n, e);
    for(int i=0; i<n-1; i++){
        if(output[i].src < output[i].dest){
            cout << output[i].src << " " << output[i].dest << " " << output[i].weight << endl;
        }else{
            cout << output[i].dest << " " << output[i].src << " " << output[i].weight << endl;
        }
    }
    return 0;
}