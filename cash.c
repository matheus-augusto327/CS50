#include <cs50.h>
#include <stdio.h>
#include <math.h>

float dollars;
int total = 0, cents;
void quarters(void);
void dimes(void);
void nickels(void);
void pennies(void);

int main (void){
    do{
        dollars = get_float("Change owed: ");
        cents = round(dollars * 100);
        quarters();
        dimes();
        nickels();
        pennies();
        printf("%i\n", total);
    }
    while(dollars < 0);
}

void quarters (void){
    do{
        total = total + cents / 25;
        cents = cents % 25;
    }
    while(cents / 25 > 0);
}

void dimes (void){
    do{
        total = total + cents / 10;
        cents = cents % 10;
    }
    while(cents / 10 > 0);
}

void nickels (void){
    do{
        total = total + cents / 5;
        cents = cents % 5;
    }
    while(cents / 5 > 0);
}

void pennies (void){
    do{
        total = total + cents / 1;
        cents = cents % 1;
    }
    while(cents / 1 > 0);
}
