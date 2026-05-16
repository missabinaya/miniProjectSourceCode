#include<stdio.h>
int prime_factors(int n,int fact[]){
    int c=0;
    for(int i=2;i<=n;i++){
        if(n % i == 0){
            fact[c++] = i;
            n = n/i;
            i--;
        }
    }
    return c;
}
int main(){
    int n,i;
    scanf("%d",&n);
    int fact[100];
    int c=prime_factors(n,fact);
    printf("Prime Factors: ");
    for(i=0;i<c;i++){
        printf("%d",fact[i]);
        if(i!=c-1){
            printf(" ");
        }
    }
    return 0;
}