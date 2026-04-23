#include <stdio.h>

int main(){
    //printf("Hello World\n");
    int motorspeed;
    float temperature;
    int itemsproduced;
    char status[10];

    printf("Enter Motorspeed:");
    scanf("%d", &motorspeed);
    
    printf("Enter Temperature:");
    scanf("%f", &temperature);

    printf("Enter Items Produced:");
    scanf("%d", &itemsproduced);
    
    printf("Enter Machine Status:");
    scanf("%15s", status);

    printf("\nOperation\n");
    printf("----------------\n");
    printf("Motorspeed:%d\n", motorspeed);
    printf("Temperature:%.2f\n", temperature);
    printf("Items Produced:%d\n", itemsproduced);
    printf("Machine Status:%s\n", status);
    



    return 0;



}