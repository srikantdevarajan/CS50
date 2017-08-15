#include <cs50.h>
#include <stdio.h>

int waterCalc(int minutes);

int main(void)
{
    
    printf("Minutes: ");
    int water = get_int();
    printf("Bottles: ");
    printf("%i\n", waterCalc(water));
    
    
}

int waterCalc(int minutes){
    return ((192*minutes)/16);
}
