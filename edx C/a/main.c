#include <stdio.h>
#include <stdlib.h>

int main()
{


    return 0;
}

void if_stament_work1(){
    // if statement work 1
   int passengerA;                                // the passengers for the trip
    float gasA;                                   // the gas cost
    float tripCostA;                              // cost of trip

    //receiving input from the users;
    scanf("%d",&passengerA);
    scanf("%f",&gasA);


    //checking if passengers is zero
    if( passengerA == 0 ){
        tripCostA = gasA;
        printf("%.2f", tripCostA);
    }else if( passengerA >= 1 ){
        passengerA = 2;
        gasA = 45.5;
        tripCostA = (1 + gasA)/ (passengerA + 1);
        printf("%.2f\n", tripCostA);
    }


}
