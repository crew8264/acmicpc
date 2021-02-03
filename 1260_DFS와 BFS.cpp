
using namespace std;
#include <iostream>
#include <string.h>

int graph[1001][1001] = { 0, };
int dfsVisit[1001] = { 0, };
int bfsVisit[1001] = { 0, };
int queue[1001] = { 0, };

void dfs(int n1, int n2) {
    
    dfsVisit[n1] = 1;
    printf("%d ", n1);
    
    for(int i = 1; i <= n2; i++) {
        if(graph[n1][i] == 1 && dfsVisit[i] == 0)
            dfs(i, n2);
    }
    
    return;
}

void bfs(int n1, int n2) {
    int front = 0, rear = 0, pop = 0;
    
    printf("%d ", n1);
    queue[0] = n1;
    rear++;
    bfsVisit[n1] = 1;
    
    while(front < rear) {
        pop = queue[front];
        front++;
        
        for(int i = 1; i <= n2; i++) {
            if(graph[pop][i] == 1 && bfsVisit[i] == 0) {
                printf("%d ", i);
                queue[rear] = i;
                rear++;
                bfsVisit[i] = 1;
            }
        }
    }
    return;
}


int main() {
    
    int N, M, V;
    scanf("%d %d %d", &N, &M, &V);
    
    for(int i = 0; i < M; i++) {
        int x, y;
        scanf("%d%d", &x, &y);
        graph[x][y] = 1;
        graph[y][x] = 1;
    }
    
    dfs(V, N);
    printf("\n");
    bfs(V, N);
    
    return 0;
    
}