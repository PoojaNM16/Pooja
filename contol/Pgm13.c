#include<stdio.h>
int main() {
    int m,n;
    printf("enter a  num\n");
    scanf("%d",&m);
    if(m>0) {
        n=1;
        printf("%d",n);
    } else if(m==0){
        n=0;
        printf("%d",n);
    } else {
        n=-1;
        printf("%d",n);
    }
}
    
