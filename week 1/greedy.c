#include <cs50.h>
#include <stdio.h>

int main(void){
    float change = 0;
    int quarters = 0;
    int dime = 0;
    int nickel = 0;
    int pennies = 0;
    
    do{
        printf("O hai! How much change is owed?\n");
        change = get_float();
    }while(change <= 0);
    
    //conversion
    int cents = change * 100;

    
        while(cents >= 25){
            cents = cents - 25;
            quarters++;
        }
        while(cents >= 10){
            cents = cents - 10;
            dime++;
        }
        while(cents >= 5){
            cents = cents - 5;
            nickel++;
        }
        while(cents >= 1){
            cents = cents - 1;
            pennies++;
        }
       
    
   int total = quarters + dime + nickel + pennies;
   
   printf("%i\n", total);
    
    
    
    
}