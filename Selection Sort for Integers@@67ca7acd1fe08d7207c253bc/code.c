// Your code here...
void printArray(int arr[],int n){
    for(int i=0; i<n;i++){
        printf("%d ",arr[i]);
    }
}
void selectionSort(int arr[],int n){
    int c;
    for(int i=0; i<n-1;i++){
        int minindex = i;
        for(int j=i ;j<n;j++){
            if(arr[j]<arr[minindex]){
                minindex = j;
            }
        }
        c = arr[i];
        arr[i] = arr[minindex];
        arr[minindex] = c;
    }
}