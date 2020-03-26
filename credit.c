#include <cs50.h>
#include <stdio.h>

void checksum(void);
void card_name(void);

long number;
int counter = 0, rest, sum;

int main(void){
    checksum();
    card_name();    
}

void checksum(void){
    do{
        number = get_long("Number: ");
    }
    while(false);
    do{
        rest = number % 10;
        number = number / 10;
        counter = counter + 1;
        if(counter % 2 == 0){
            if((rest * 2) >= 10){
                rest = rest * 2 / 10 + rest * 2 % 10;
                sum = sum + rest;
            }
            else{
                sum = sum + rest * 2;
            }
        }
        else{
            sum = sum + rest;
        }
    }
    while(number > 0);
}

void card_name(void){
    if(sum % 10 == 0){
        if(counter == 15 && rest == 3){
            printf("AMEX\n");
        }
        else if((counter == 16 && rest == 5) || (counter == 16 && rest == 2)){
            printf("MASTERCARD\n");
        }
        else if((counter == 16 || counter == 13) && rest == 4){
            printf("VISA\n");
        }
    }
    else{
        printf("INVALID\n");
    }
}
