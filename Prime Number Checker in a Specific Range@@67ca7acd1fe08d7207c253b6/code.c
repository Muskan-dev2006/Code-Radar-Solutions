// Your code here...
int isPrime(int a){
    int is_prime=1;
    if(a==0 || a==1){
        is_prime =0;
    }
    else{
        for (int i=2;i<a;i++){
            if(a%i==0){
                is_prime=0;
                break;
            }
        }
    }
    return is_prime;
}
void printPrimesInRange(int a, int b){
    for(int i=a; i<=b; i++){
        if(isPrime(i)){
            printf("%d ",i);
        }
    }
}
