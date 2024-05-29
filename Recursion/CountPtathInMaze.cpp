// this program finds path of a maze using recursion

#include <iostream>


using namespace std;
int CountPathMaze(int n, int i, int j){
if(i == n-1 && j == n-1){ 
    return 1;
}
if(i>=n || j>=n){
    return 0;
}
  return  CountPathMaze(n,i+1,j) + CountPathMaze(n,i,j+1);
}
int main() {

cout<< CountPathMaze(3,0,0);
    
    return 0;
}