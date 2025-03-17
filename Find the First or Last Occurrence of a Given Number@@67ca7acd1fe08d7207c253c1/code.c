// Your code here...
int findOccurrence(int arr[],int n, int target, char mode){
    if(mode=='F'){
        for(int i=0;i<n;i++){
            if(target==arr[i]){
                return i;
            }
        }
    }
    else if(mode=='L'){
        for(int i=n-1;i>=0;i--){
            if(target==arr[i]){
                return i;
            }
        }
    }
    return -1;
}