#include<iostream>
using namespace std;

void dijkstra(int graph[9][9],int start){
	int n = 9;
	int visit[9];
	for (int i = 0; i < 9; ++i){
		visit[i] = 0;
	}

	int distance[9];
	for (int i = 0; i < 9; ++i){
		distance[i] = 9999;
	}

	distance[start] = 0;

	for (int j = 0; j < 9; ++j){
		int min = 9999;
		int min_index = -1;
		
		for(int i = 0; i < 9; i++){
			if(visit[i] == 0 && distance[i] < min){
				min = distance[i];
				min_index = i;
			}
		}
		visit[min_index] = 1;
		for (int i = 0; i < 9; ++i){
			if(visit[i] == 0 && graph[min_index][i] != 0 && graph[min_index][i]+distance[min_index] < distance[i]){
					distance[i] = graph[min_index][i]+distance[min_index];
			}
		}
	}
	
	cout << "Vertex" << " " << "Distance" << endl; 
    for (int i = 0; i < 9; i++) 
        cout << i << "\t" << distance[i] << endl;
}


int main(){
	int graph[9][9] = { { 0, 4, 0, 0, 0, 0, 0, 8, 0 }, 
                        { 4, 0, 8, 0, 0, 0, 0, 11, 0 }, 
                        { 0, 8, 0, 7, 0, 4, 0, 0, 2 }, 
                        { 0, 0, 7, 0, 9, 14, 0, 0, 0 }, 
                        { 0, 0, 0, 9, 0, 10, 0, 0, 0 }, 
                        { 0, 0, 4, 14, 10, 0, 2, 0, 0 }, 
                        { 0, 0, 0, 0, 0, 2, 0, 1, 6 }, 
                        { 8, 11, 0, 0, 0, 0, 1, 0, 7 }, 
                        { 0, 0, 2, 0, 0, 0, 6, 7, 0 } }; 
    dijkstra(graph,0);

return 0;
}
