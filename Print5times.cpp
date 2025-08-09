#include <iostream>
using namespace std;

void PrintName(int count, int n){
    if (count > n){
        return;
    }
    else {
        cout << count << endl;
        PrintName(count + 1, n );
    }
}

int main(){
    int n = 10;
    PrintName(1, n);
    return 0;
}