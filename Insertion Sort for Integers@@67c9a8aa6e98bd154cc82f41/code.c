// Your code here...
void printArray(int arr[],int n){
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
}
void insertionSort(int arr[],int n){
    for(int i=1; i<n;i++){
        int j = i-1;
        key = v[j];
        while(j>=0 && v[j]>key){
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = key;
    }
}