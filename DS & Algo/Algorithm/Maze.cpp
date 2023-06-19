#include<bits/stdc++.h>
using namespace std;
int ara[4][4]={{1, 1, 0, 0},
               {0, 1, 0, 1},
               {0, 1, 1, 0},
               {1, 0, 1, 1}};
int n=4;
bool solution(bool b[][4],int cx,int cy)
{
        if(cx>=0 && cy>=0 && cx<n && cy<n && ara[cx][cy]==1){
            b[cx][cy]=true;
            return true;
        }
        return false;
}
bool solve_maze(bool b[][4],int cx,int cy)//c for current index(x,y)
{

    if(cx==n-1 && cy==n-1) return true;
    if(solution(b,cx,cy+1)){
        bool temp = solve_maze(b,cx,cy+1);
        if(temp) return true;
        b[cx][cy+1]=false;
    }
    //if(solution(b,cx,cy-1)){
      // bool temp = solve_maze(b,cx,cy-1);
        //if(temp) return true;
        //b[cx][cy-1]=false;
    //}
    if(solution(b,cx+1,cy)){
       bool temp = solve_maze(b,cx+1,cy);
        if(temp) return true;
        b[cx+1][cy]=false;
    }
    //if(solution(b,cx-1,cy)){
      // bool temp = solve_maze(b,cx-1,cy);
        //if(temp) return true;
        //b[cx-1][cy]=false;
    //}
    return false;
}
void maze()
{
    bool b[4][4]={{0, 0, 0, 0},{0, 0, 0, 0},{0, 0, 0, 0},{0, 0, 0, 0}};
    b[0][0] = 1;
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
int main()
{
    maze();
    return 0;
}
