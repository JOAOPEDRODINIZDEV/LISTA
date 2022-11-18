#include <stdio.h>
#include <locale.h>


int main() {
      setlocale(LC_ALL,"Portuguese_Brazil");

   
   
         int senha,n; 
      
     do{ 
         scanf("%d",&senha); 
          
         if(senha==2002){ 
            printf("Acesso Permitido\n"); 
             return 0; 
         }else{ 
             printf("Senha Invalida\n");     
         } 
         }while(n=2002); 
   
     return 0;
    
    
    
    
    
  
    


    return 0;
}

    