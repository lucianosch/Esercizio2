#include <iostream>
using namespace std;
#include <time.h>
#define Z 100
#define N 5
#define M 4
srand(time(0))
int R,C,R1,C1,A[N][M];
int main (){
    R=0;
    while (R<N){
        C=0;
        while (C<M) {
            A[R][C]=rand()%Z+1;
            cout<< A[R][C]<<" ";
            C=C+1;
        }
        cout<<endl;
        R=R+1;
    }
    R1=rand()%N
    C1=rand()%M
    R=0;
    while(R<=R1) {
        C=0;
        while (C<=C1){
            cout<<A[R][C]<<" ";
            C=C+1;
        }
        cout<<endl;
        R=R+1;
    }
    return 0;
}
