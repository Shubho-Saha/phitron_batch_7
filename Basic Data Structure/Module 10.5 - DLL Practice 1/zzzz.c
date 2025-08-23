#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int hash = 0;
    int space = n - 1;
    
    for (int i = 0; i < n; i++){
        //For printing space
        for (int j = 0; j < space; j++){
            printf(" ");
        }
        
        //Printing Hash
        for (int j = 0; j <= hash; j++){
            if (i % 2 == 0){
            printf("#");
            } else {
                printf("-");
            }
        }
        
        printf("\n");
        space--;
        hash+=2;
    }



     hash = 2 * n - 3;
     space = 1;

if (n%2==0){
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < space; j++) {
            printf(" ");
        }
        for (int j = 0; j < hash; j++) {
            if (i % 2 == 0) {
                printf("#");
            }
            else {
                printf("-");
            }
        }
        printf("\n");
        hash -= 2;
        space++;
    }
}
else {
    hash = 2 * n - 4;
     space = 1;
    
    for (int i = 1; i < n; i++){
        //For printing space
        for (int j = 0; j < space; j++){
            printf(" ");
        }
        
        //Printing Hash
        for (int j = 0; j <= hash; j++){
            if (i % 2 == 0){
            printf("#");
            } else {
                printf("-");
            }
        }
        
        printf("\n");
        space++;
        hash-=2;
    }
}
}