#include <stdio.h>

int main(void) 
{
    int N;//number of soldier
    scanf("%d",&N);
    int Weapons,CountOfReady=0,CountOfNotReady=0;
    
    while(N)
    {
        scanf("%d",&Weapons);
        
        if(Weapons%2==0)
        {
            CountOfReady++;
        }
        else
        {
            CountOfNotReady++;
        }
        N--;
    }
        if(CountOfReady>CountOfNotReady)
        {
            printf("READY FOR BATTLE");
        }
        else
        {
            printf("NOT READY");
        }
        return 0;
    
}
