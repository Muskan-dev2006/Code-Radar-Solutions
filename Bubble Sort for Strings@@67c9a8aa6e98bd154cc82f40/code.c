// Your code here...
void(char arr[][100],int n){
    for(int i=0; i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(v[j]>v[j+1]){
                char c[100] = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = c;
            }
        }
    }
}