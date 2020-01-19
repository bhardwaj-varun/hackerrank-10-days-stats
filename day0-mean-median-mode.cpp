#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    int i, sum=0, max=-1;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        sum+=a[i];
        max=(a[i]>max)? a[i]: max;
    }
    //mean
    float mean = (float)sum/n;
    printf("%.1f\n", mean);

    //median
    sort(a, a+n);
    float median = (float)(a[(n-1)/2]+a[n/2])/2; 
    printf("%.1f\n",median);

    //mode
    int occ[max+1]={0};
    //calculate frequency
    for(i=0;i<n;i++){
        occ[a[i]]++;
    }

    //mode is the index with max count
    int mode=0;
    int k=occ[0];
    for(i=1;i<max+1;++i){
        if(occ[i]>k){
            k=occ[i];
            mode=i;
        }
    }
    printf("%d\n", mode);

    return 0;
}