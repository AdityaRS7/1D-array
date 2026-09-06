#include<stdio.h>
int main(){
    int i,n;
    printf("enter array size");
    scanf("%i",&n);
    int a[n];
    printf("enter array elements");
    for(i=0;i<n;i++)
        scanf("%i",a[i]);
    printf("entered array elemets are");
    for(i=0;i<n;i++)
        printf("%i",a[i]);
    return 0;
}
