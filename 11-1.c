#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int i=21;
    int s=21;
    int c;
    
    while (i+s >= 21) {
        i = rand() % 21;
        s = rand() % 21;
    }
    
    c = 20-i-s;
    
    if (i >= s && i >= c){
        printf ("mage\n stats:\n i%d\n s%d\n c%d\n",i,s,c);
    }
    
    if (s >= i && s >= c){
        printf ("knight\n stats:\n i%d\n s%d\n c%d\n",i,s,c);
    }
    
    if (c >= i && c >= s){
        printf ("thief\n stats:\n i%d\n s%d\n c%d\n",i,s,c);
    }
    
    return 0;
}