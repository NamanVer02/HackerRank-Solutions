#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    char s[1000];
    scanf("%s", s);
    int c0=0, c1=0, c2=0, c3=0, c4=0, c5=0, c6=0, c7=0, c8=0, c9=0;
    
    for (int i = 0; i < strlen(s); i++){
        if (s[i] == '0'){
            c0 += 1;
        }
        else if (s[i] == '1'){
            c1 += 1;
        }
        else if (s[i] == '2'){
            c2 += 1;
        }
        else if (s[i] == '3'){
            c3 += 1;
        }
        else if (s[i] == '4'){
            c4 += 1;
        }
        else if (s[i] == '5'){
            c5 += 1;
        }
        else if (s[i] == '6'){
            c6 += 1;
        }
        else if (s[i] == '7'){
            c7 += 1;
        }
        else if (s[i] == '8'){
            c8 += 1;
        }
        else if (s[i] == '9'){
            c9 += 1;
        }
    }
    
    
    
    printf("%d %d %d %d %d %d %d %d %d %d", c0, c1, c2, c3, c4, c5, c6, c7, c8, c9);
    
    return 0;
    
}
