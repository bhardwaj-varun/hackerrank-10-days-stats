#include<bits/stdc++.h>
using namespace std;


int main() {
    int n;
    scanf("%d",&n);

    int arr[n], f[n];
    int i;

    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }  
    int sumf = 0;
    for(i=0;i<n;i++){
        scanf("%d", &f[i]);
        sumf+=f[i];
    }
    int a[sumf];
    int j;

    int k=0;
    for(j=0;j<n;j++){
        for(i=0;i<f[j];i++){
            a[k++] = arr[j];
        }
    }

    sort(a, a+sumf);

   /* for(i=0;i<sumf;i++){
        printf("%d ", a[i]);
    }*/
   // printf("\n%d\n", sumf);
    float q1,q2,q3;
    n=sumf;
    if(n%2==0){
        q1 = (float)(a[n/4]+a[n/4-1])/2;
        q2 = (float)(a[(n-1)/2]+a[n/2])/2;
        q3 = (float)(a[(n+n/2)/2] + a[(n+n/2)/2+1])/2;
    }else{
        q1 = (float)(a[(n/4-1)] + a[n/4])/2;
        q2 = (float)a[n/2];
        q3 = (float)(a[(n/2+1+n)/2] +a[(n/2+n)/2])/2;
    }
    
    printf("%.1f\n", q3-q1);
    
    return 0;
}
