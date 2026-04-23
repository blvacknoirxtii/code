#include <stdio.h>

int main(){
    /*float temp;

    printf("What is the temperature:");
    scanf("%f", &temp);

    if (temp > 50)
    {
      printf("Temperature is:%.2f\n", temp);
      printf("WARNING, OVERHEATING\n");
    }*/

    /*float temperature;

    printf("Enter System Temperature:");
    scanf("%f", &temperature);

    if (temperature > 60)
    {
        printf("DANGER\n");
    }*/

    /*int speed;

    printf("Enter Motorspeed in km/h:");
    scanf("%d", &speed);

    printf("Speed of vehicle is %d km/h\n", speed);

    if (speed > 200)
    {
        printf("OVERSPEEDING\n");
    }

    else
    {
        printf("NORMAL SPEED\nHAVE A NICE JOURNEY\n");
    }*/

    /*float Level;

    printf("Battery Level:");
    scanf("%f", &Level);

    printf("Battery Level is %.2f%%\n", Level);

    if (Level < 20)
    {
        printf("Low BatteryLevel\n");
    }

    else if (Level < 40)
    {
        printf("Battery Level Medium\n");
    }

    else if (Level < 60)
    {
        printf("Good\n");
    }

    else if (Level < 80)
    {
        printf("Battery Level is Very Good\n");
    }

    else
    {
        printf("Battery Level Full\n");
    }
    
    char status[10];
    printf("Enter name:");
    scanf("%s", status);

    printf(status);*/

    //counter

    printf("Machine Controls\n");
    printf("1. Motor ON\n");
    printf("2. Motor OFF\n");
    printf("3. Reset System\n");
    printf("4. ShutDown\n");
    
    int select;
    printf("Choose an option:");
    scanf("%d", &select);

    switch (select)
    {
        case 1:
        printf("Motor ON\n");
        break;

        case 2:
        printf("Motor OFF\n");
        break;

        case 3:
        printf("System Reset Beginning\n");
        break;

        case 4:
        printf("System Shutdown Initiated\n");
        break;

        default:
        printf("Invalid Option\n");

    }
    return 0;
}