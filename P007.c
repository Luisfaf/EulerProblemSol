#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool es_primo(int n){
    if(n<=1){
        return false;
    }
    for(int i=2; i*i<=n; i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

int main() {
    int m, n, i, cont, cont1 =0;
    printf("ingress wanted th prime (>1):");
    scanf("%d", &m);
    for(i=2; cont <= m;   i++){

        n = i;
        if(es_primo(n)){
            cont++;
                if(cont == m){

                    printf("The %dst prime is: %d\n", m, n);
                }
        }
    }
}