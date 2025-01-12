// day of week name by swtich statement 
#include<stdio.h>

int main(){
    int a ;

    printf("enter the serial numbe of a day\n");
    scanf("%d", &a );

    switch (a)
    {
    case 1:
        printf("MONDAY");

        break;
    case 2:
        printf("TUESDAY");
        
        break;
    case 3:
        printf("WEDNESDAY");
        
        break;
    case 4:
        printf("THRUSDAY");
        
        break;
     case 5:
        printf("FRIDAY");
        
        break;
    case 6:
        printf("SATURDAY");
        
        break; 
    case 7:
        printf("sunday");
        
        break;
    default:
        printf("please input correct serial number");
    }
}