#include<bits/stdc++.h>
using namespace std;
int ara[4][4]={{1, 0, 0, 0},
               {1, 1, 0, 1},
               {0, 1, 0, 0},
               {1, 1, 1, 1}};
int n=4;
void maze()
{
    bool b[4][4]={{0, 0, 0, 0},{0, 0, 0, 0},{0, 0, 0, 0},{0, 0, 0, 0}};
    if(!(solve_maze(b,0,0))) cout << "Solution Doesn't Exists\n";
    else{
       cout << "Solution is: "<< endl;
       for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)
            cout << b[i][j];
        cout << endl;
       }
    }
}
bool solve_maze(bool b,int cx,int cy)//c for current index(x,y)
{
    if(x==n-1 && y==n-1) return true;
    if(solution(x,y+1)){
        bool temp = solve_maze(b,x,y+1);
        if(temp) return true;
        b[x][y+1]=false;
    }
    if(solution(x,y-1)){
       bool temp = solve_maze(b,x,y-1);
        if(temp) return true;
        b[x][y-1]=false;
    }
    if(solution(x+1,y)){
       bool temp = solve_maze(b,x+1,y);
        if(temp) return true;
        b[x+1][y]=false;
    }
    if(solution(x-1,y)){
       bool temp = solve_maze(b,x-1,y);
        if(temp) return true;
        b[x-1][y]=false;
    }
    return false;
}
bool solution(bool b,long long cx,long long cy)
{
        if(cx<n && cy < n && (n[x][y]==1)){
            b[x][y]=true;
            return true;
        }
        return false;
}
int main()
{
    maze();
    return 0;
}
