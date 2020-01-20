#include<bits/stdc++.h>
using namespace std;


int main() {
    
    int n;
    scanf("%d", &n);
    int a[n];
    int i,sum=0;
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
        sum+=a[i];
    }
    double mean = sum/n;
    

    double t;
    for(i=0;i<n;i++){
        t += (((double)a[i]-mean)*((double)a[i]-mean));
    }
    double variance = t/n;

    double sd = sqrt(variance);
    printf("%.1lf", sd);
    return 0;
}
