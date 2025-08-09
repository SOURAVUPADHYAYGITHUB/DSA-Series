#include <iostream>
using namespace std;

void PrintName(int i, int num){
    if(i == num ){
        return;
    }
    else{
        cout << i << endl;
        PrintName(i+1, num);
    }
}

int main(){
    int num = 7;
    PrintName(0, num);
    return 0;
}

