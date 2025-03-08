// Your code here...
void fibonacciSeries(int n){
    int a=0;
    int b = 1;
    int c;
    if(n==0){
        printf("%d ",a);
    }
    if (n==1){
        printf("%d ",b);
    }
    else if (n>=2){
        for(int i = 0; i<n;i++){
            c = a + b;
            printf("%d ",c);
        }
    }
}