#include <bits/stdc++.h>

int main()
{
    printf ("Los numeros primos del 1 al 100 son:\n");
    int mi=1;
    
  for (int num=3; num <= 100; ++num){
      int x=1, cont=0;
      
      while (x<=num){
          
          if (num%x == 0){
          cont +=1;
          }
          x+=1;
      }
      
       if (cont==2) {

       printf ("el numero %d : %d\n",mi, num);
       mi++; 
      
       } 
    }
  
 
    return 0;
}
