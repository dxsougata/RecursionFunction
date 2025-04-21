#include<stdio.h>
int fun(int n){
    if(n==0)
    return ;
    else
    printf("%d",n);
    return fun(n-1);
}
int main(){
    fun(6);
    //return 0;
}