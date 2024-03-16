#include <stdio.h>
#include <stdlib.h>

int main()
{
    int eingabePlatzierung = 1;
    int positionStartEins = 1;
    int startFuehrung = 1;
    int startPosi = 1;


    while(1){

            printf(": ");
            scanf("%d", &eingabePlatzierung);

            if(eingabePlatzierung == 0){
                break;
            }

            if(eingabePlatzierung <= positionStartEins){
                positionStartEins++;
                printf("position #1: %d\n", positionStartEins);
            }

            if(eingabePlatzierung == 1){
                ++startPosi;
                startFuehrung = startPosi;
                printf("new leader: #%d\n", startPosi);

            }else if (eingabePlatzierung > 1){
                ++startPosi;
            }
    }
    printf("final position #1: %d\n", positionStartEins);
    printf("winner: #%d", startFuehrung);

    return 0;
}
