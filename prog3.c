#include <stdio.h>
int main (void){
    int iNn,iResult_n;
    scanf("%d",&iNn);
    iResult_n=1;
    while(iNn>=0){
        if (iNn!=0 && iNn!=1){
            iResult_n=iResult_n*iNn;
        }
    iNn--;
   }
   printf("%d",iResult_n);
}