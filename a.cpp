#include <iostream>
#include <cmath>

using namespace std;

inline double sqr(double v) {
    return v * v;
}

int main(){
    int i = 0,n,a[100];
    double b=0.0,c=0.0;
    while(cin >> n){
        a[i] = n;
        i++;
    }
    for(int l=0; l<i; l++){
        b+=a[l];
    } 
    b /= i;
    for(int l=0; l < i; l++){
        c += sqr(a[l] - b);
    }
    c /= i;
    c=sqrt(c);

    cout << "平均:" << b << " 標準偏差:" << c << endl;
    return 0;
}