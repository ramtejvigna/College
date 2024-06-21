#include<iostream>
using namespace std;

int main() {
    int mat[10][10] = {0};
    for(int i=0;i<10;i++) {
        for(int j=0;j<10;j++) {
            int rowPosition = i+1;
            int colPosition = j+1;
            cout << rowPosition*colPosition << " ";
        }
        cout << '\n';
    }
}
