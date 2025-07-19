#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int rows = 1;
    while(rows <= n){

        int cols = 1;
        while (cols <= n){
            char ch = 'A' + cols - 1;
            cout << ch;
            cols++;
        }
    cout << endl;
    rows++;         
    }
}