// Your code here...
#include <stdio.h>
int maxGadgetSpend(int keyboards[], int n, int headsets[], int m,int budget ){
    int arr[n][m];
    int max = 0;
    for(int i=0; i<n;i++){
        for(int j=0; j<m;j++){
            arr[i][j] = keyboards[i] + headsets[j];
            if(max<arr[i][j] && arr[i][j]<=budget){
                max = arr[i][j];

            }
        }
        

    }
    if(max==0){
        return -1;
    }
    else{
        return max;
    }
}