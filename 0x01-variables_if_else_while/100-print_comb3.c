#include <stdio.h>

int main(void){

  int a = 48;
  
  for(; a <= 57; a++){   
    for(int b = 49; b <= 57; b++){

      if(a < b){
        putchar(a);
        putchar(b); 
        
        if(a < 56 || b < 56) {
          putchar(',');
          putchar(' ');
        }
      }
      
    } 
    
  }
  putchar('\n');
  return 0;
}
