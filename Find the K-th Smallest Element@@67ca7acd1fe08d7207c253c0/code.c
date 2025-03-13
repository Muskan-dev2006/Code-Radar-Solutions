// Your code here...
void sortedarray(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int c;
        for(int j=0; j<n-i-1;j++){
            if(arr[j]>arr[j+1])
            {   c = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = c;
            }
        }
    }
}
int kthSmallest(int arr[],int n,int k){
    sortedarray(arr,n);
    if (k<=n){
        return arr[k-1];
    }
    else{
        return -1;
    }
}