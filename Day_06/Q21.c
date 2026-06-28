#include <stdio.h>
int main(){
int n = 10;
int a[100];
int rem;
int i=0;


while(n){
    rem = n%2;
    n = n/2;
    a[i] = rem;
    i++;
}

for(int j = i-1; j>=0; j--){
    printf("%d", a[j]);
}
return 0;
}