#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int answer;
    do{
        answer = get_int("Height: ");
        if(answer > 0 && answer <=8){
            for(int i = 0; i <= answer; i++){
                for(int j = 0; j <= answer; j++){
                    if(j == i){
                        printf("  ");
                        for(int x = 1; x <= i; x++){
                            printf("#");
                        }
                        printf("\n");
                    }
                    else if(j < i){
                        printf("#");
                    }
                    else if(j >= i){
                        printf(" ");
                    }
                }
            }
        }
    }
    while(answer <= 0 || answer > 8);
}
