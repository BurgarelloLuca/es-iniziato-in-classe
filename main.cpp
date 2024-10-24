#include <iostream>

int main() {
int nRighe,i,j;
    printf("Inserisci numero di righe : ");
    scanf("%d",&nRighe);
    for(i=0;i<nRighe;i++) {
        for(j=0;j<i;j++) {
            printf(" ");
        }
        for(j=i;j<nRighe;j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
