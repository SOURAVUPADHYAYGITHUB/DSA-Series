#include <iostream>
using namespace std;

void LinearByBacktracking(int i, int n){
    if( i < n){
        return;
    }
    else{
        LinearByBacktracking(i-1, n);
        cout << i << endl;
    }
}

int main(){
    LinearByBacktracking(10, 0);
}