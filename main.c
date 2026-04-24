#include <stdio.h>

int main()
{
   int numero[5] = {10,20,30,40,50};
     int i;
     
     numero[3] = 45;
     printf("%d\n" , numero[2]);
     for (i=0; i<5; i++){
         printf("numero[%d] = %d\n", i, numero[i]);
         
     }
   
      

    return 0;
}