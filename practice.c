#include <stdio.h>

int main()
{
    printf("System Temperature Scanner For Incubator\n");
    int temp;
    printf("Enter Temperature:");
    scanf("%d", &temp);
    if (temp < 20)
    {
       printf("Temperature low for survival\n");
    }
    
    else if(temp < 40)
    {   
        printf("Temperature cool for cell survival\n");
    }

    else if(temp < 50)
    {
        printf("Temperature suitable for few organisms\n");
    }

    else if(temp < 60){
        printf("Temperature is causing drying\n");
    }
    else
    {
        printf("Temperature is denaturing cells\n");
        printf("TURN FANS ON\n");
        printf("TURN HEATING ELEMENT OFF\n");

        float fSpeed;
        printf("Fan Speed:");
        scanf("%f", &fSpeed);
        
        if (fSpeed > 60)
        { 
            printf("Wind is breaking plants\n");
            printf("REDUCE FAN SPEED\n");
        
        }
        printf("\n");
        printf("SYSTEM SUMMARY\n");
        printf("--------------\n");
        printf("Fan Wind Speed:%.2fKm/h\n",fSpeed);
    }

    int summary();
    {
        if(temp<60)
        {
            printf("SYSTEM SUMMARY\n");
            printf("--------------\n");
        }
    }
    summary();

    printf("Temperature: %d\n",temp);
    
    return 0;
}