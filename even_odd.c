/*print number from 1 to 10 . cond - if number is odd add 1 , if even substract 1 */

#include<stdio.h>
int n=1;

int odd(){
    
    if(n<=10)
    printf("%d -> %d\n",n,n+1);
    n++;
    even();
    return;
}

int even(){
    
    if(n<=10)
    printf("%d -> %d\n",n,n-1);
    n++;
    odd();
    return;
}
int main(){
    odd();
}