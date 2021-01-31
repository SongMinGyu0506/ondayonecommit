#include <iostream>
#include <vector>
using namespace std;

void solution(int A, int B, int C) {
    if(B > C) {
        cout << "-1";
    }
    else {
        int counter = 1;
        int temp_B = B;
        int temp_C = C;
        while(true) {
            if(A+B<C){
                break;
            }
            counter++;
            B=B+temp_B;
            C=C+temp_C;
        }
        cout << counter;
    }
}

int main() {
    int A,B,C;
    cin >> A >> B >> C;
    solution(A,B,C);
    return 0;
}