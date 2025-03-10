// Your code here...
void fibonacciSeries(int n){
    if(n==0){
        printf("%d ",0);
    }
    if(n==1){
        printf("%d ",1);
    }
    int fib = fibonacciSeries(n-1) + fibonacciSeries(n-2);
    printf("%d ",fib);
}