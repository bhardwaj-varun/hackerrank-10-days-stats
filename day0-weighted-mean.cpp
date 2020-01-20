#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    int x[n], w[n];
    int i;
    for(i=0;i<n;i++)
        scanf("%d",&x[i]);
    
    
    for(i=0;i<n;i++)
        scanf("%d",&w[i]);
    
    int sumw=0, wx=0;

    for(i=0;i<n;i++){
        wx+=x[i]*w[i];
        sumw+=w[i];
    }
    float wmean = (float)wx/sumw;
    printf("%.1f",wmean);
    return 0;
}