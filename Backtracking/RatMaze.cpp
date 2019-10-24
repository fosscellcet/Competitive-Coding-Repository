#include<bits/stdc++.h>
using namespace std;


void printSolution(int** solution,int n){
    
    for(int i = 0; i<n ;i++){
        for(int j = 0; j<n ;j++){
            cout << solution[i][j] << " ";
        }
    }
    cout << endl;
    return;
}

void mazeHelp(int maze[][20],int n,int** solution,int x,int y){
    
    if(x==n-1 && y==n-1){
        solution[x][y] = 1;
        printSolution(solution,n);
        return;
    }
    if(x<0 || y<0 || x>=n || y>=n || maze[x][y]==0 || solution[x][y]==1){
        return;
    }
    solution[x][y] = 1;
    mazeHelp(maze,n,solution,x-1,y);
    mazeHelp(maze,n,solution,x+1,y);
    mazeHelp(maze,n,solution,x,y-1);
    mazeHelp(maze,n,solution,x,y+1);
    solution[x][y] = 0;
}
void ratInAMaze(int maze[][20], int n){

    int** solution = new int*[n];
    for(int i = 0; i<n ;i++){
        solution[i] = new int[n];
    }
    mazeHelp(maze,n,solution,0,0);
    return;
}

int main(){

    int n;
    cin >> n;

    int maze[n][n];
    for (int i=0; i<n;i++){
        for(int j=0; j<n;j++){
            cin >> maze[i][j];
        }
    }
    ratInAMaze(maze, n);
    return 0;
}
