/*This program accepts multiple inputs from the user and determines whether each input is even or odd. After displaying the results, it asks the user if they want to continue using the program or not.

 ------------------------------------------------------------------------------
-EXAMPLE OUTPUT-
>Enter an integer : 76
76 is an even number.
 Do you wish to continue?[y/n]: y
>Enter an integer : 81
 81 is an odd number
 Do you wish to continue?[y/n]: n
>Okey, have a good day!
 
 created by Mehmet Akif Duran on 8.11.2023.
*/


#include <stdio.h>

int main (void) {
    
    //Variable declarations (& initializations)
    
    char ans;
    int number;
    
    //Executable statements

    do{
        printf("Please enter an integer \n");
        scanf("%d", &number);
        
        if(number % 2 == 0)
            printf("%d is an even number. \n", number);
        else
            printf("%d is an odd number. \n", number);
        
        printf("Do you wish to continue? [y/n] \n");
        scanf(" %c", &ans);
            
        
    }while(ans != 'n');
        
    printf("!!! THE END !!!");
    
    
    
    return 0;
}
