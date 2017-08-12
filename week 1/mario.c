#include <cs50.h>
#include <stdio.h>

int main(void){
    int height;
    do{
        printf("Height: ");
         height = get_int();
    }
    while(height < 0 || height > 23);
    //height = 5;
    int spaceLimit = (height - 1);
    for(int i =0; i < height; i++){
            

            for(int z = 0; z < spaceLimit; z++){
                printf(" ");
                
            }
            spaceLimit--;
        
        for(int j = 0; j < i + 2; j++){
            printf("#");
        }
        printf("\n");
        
    
       
    }
}
    
    
    