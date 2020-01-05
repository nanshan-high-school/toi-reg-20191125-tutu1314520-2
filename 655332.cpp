#include <iostream>
using namespace std;

int main() {
    float rain;
    float last;
    int allrain[50][50] = {0};
    int test[1000] = {0};
    int test2[100] = {0};
    int i,j,a,b,q,g,n;
    for (i = 0; i < 7; i++){
        for (j = 0; j < 4; j++){
            cin >> rain;
            allrain[i][j] += rain;
        }
    }
    for (a = 0; a < 7; a++){
        for (b = 0; b < 4; b++){
            if (allrain[a][b] > allrain[a][b+1]){
               test[a] += allrain[a][b];
               n = b;
            }
        }
    }
    for (q = 0; q < 7 ; q++){
        if (test[q] > test[q+1]){
           g = q;
        }     
    }
    if (n == 1){
        cout << g << "\n" << "morning";
    } else if (n == 2){
        cout << g << "\n" << "afternoon";
    } else if (n == 3){
        cout << g << "\n" << "night";
    } else{
        cout << g << "\n" << "earlymorning";
    }       
}
