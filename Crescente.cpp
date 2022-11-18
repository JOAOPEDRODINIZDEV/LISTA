#include <stdio.h>
#include <locale.h>


int main() {
      setlocale(LC_ALL,"Portuguese_Brazil");

   
   
         int y,x; 
      
     do{ 
         scanf("%d",&x); 
         scanf("%d",&y); 
         if(x<y){
         printf("Crescente\n");
        }
        if(x>y){
        printf("Decrescente\n");
        }
         
         }while(x!=y); 
   
     return 0;
    
    
    
    
    
  
    


    return 0;
}

    