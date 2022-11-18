#include <stdio.h>
#include <locale.h>


int main() {
      setlocale(LC_ALL,"Portuguese_Brazil");

   
   
         int n,tabuada; 
      
     
         scanf("%d",&n); 
          for(int i=1; i<=10;i++){
          tabuada=n*i;
          printf("%d X %d =%d\n", i,n,tabuada);
        }
         
        
   
     
    
    
    
    
    
  
    


    return 0;
}

    