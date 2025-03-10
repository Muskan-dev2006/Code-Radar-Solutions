// Your code here...
int fibonacciSeries(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int fib = fibonacciSeries(n-1) + fibonacciSeries(n-2);
    return fib;
}