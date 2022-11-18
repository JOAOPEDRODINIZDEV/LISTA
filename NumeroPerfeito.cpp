#include <stdio.h>
#include <locale.h>


int main() {
      setlocale(LC_ALL,"Portuguese_Brazil");

   
   
     int O,Z=0; 
      
     scanf("%d",&O); 
      
     for(int i=1;i<O;i++){ 
        if(O%i==0){ 
          Z=Z+i; 
                 } 
     }
    if(Z==O){ 
       printf("%d É perfeito\n",O); 
         }else { 
          
        printf("%d Não é perfeito\n",O); 
         } 
     



    
   

    
    
    
    
    
    
  
    


    return 0;
}

    