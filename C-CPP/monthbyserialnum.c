// Month by its serial number
#include<stdio.h>

int main(){
    int a ;

    printf("enter the serial numbe of a month\n");
    scanf("%d", &a );

    switch (a)
    {
     case 1:
        printf("JANUARY");

        break;
    case 2:
        printf("FEB");
        
        break;
    case 3:
        printf("MARCH");
        
        break;
    case 4:
        printf("APRIL");
        
        break;
     case 5:
        printf("MAY");
        
        break;
    case 6:
        printf("JUNE");
        
        break; 
    case 7:
        printf("JULY");
        
        breaK:
    case 8:
        printf("AUGUST");

        break;
    case 9:
        printf("SEPTEMBER");
        
        break;
    case 10:
        printf("OCTUBAR");
        
        break;
    case 11:
        printf("NOVEMBER");
        
        break;
     case 12:
        printf("DECEMBER");
        
        break;
    
    default:
        printf("please input correct serial number");
    }
}