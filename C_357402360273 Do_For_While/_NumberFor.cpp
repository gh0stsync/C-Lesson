#include <stdio.h>
#include <conio.h>


main(){
       int x, number, max, min;
       int i, n = 1;
       
       printf("Number_Max : ");
       scanf("%d", &x);
       printf("----------------\n");
       printf("No.\tNumber\n");  
       printf("----------------\n");
       
       for(i=1;i<=x;i++){
               printf("%d.\t", n);
               scanf("%d", &number);
               
               
               if(number>=max){
                    max = number;
               }else{}
               if(number<=min){
                    min = number; 
               }else{}
               
               n = n + 1;
               }
       
       printf("----------------\n");
       printf("Max Value : %d\n", max);
       printf("Min Value : %d\n", min);
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       getch();
       }
