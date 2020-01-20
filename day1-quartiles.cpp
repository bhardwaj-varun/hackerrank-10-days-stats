#include <bits/stdc++.h>

using namespace std;


int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    sort(a, a+n);

    int q1,q2,q3;

    if(n%2==0){
        q1 = (a[n/4]+a[(n-1)/4])/2;
        q2 = (a[(n-1)/2]+a[n/2])/2;
        q3 = (a[(n+n/2-1)/2]+a[(n+n/2)/2])/2;
    }else{
        q1 = (a[(n/4-1)] + a[n/4])/2;
        q2 = a[n/2];
        q3 = (a[(n/2+1+n)/2] +a[(n/2+n)/2])/2;
    }
    printf("%d\n%d\n%d\n", q1, q2, q3);
    return 0;
}
