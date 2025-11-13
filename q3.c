#include <stdio.h>
int main() {
    int image[4][4] = {
        {1,0,1,0},
        {0,1,0,1},
        {1,1,0,0},
        {0,0,1,1}
    };
    int inverted[4][4], white=0;
    printf("Original Image:\n");
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            printf("%d ",image[i][j]);
            if(image[i][j]==1) white++;
            inverted[i][j]=1-image[i][j];
        }
        printf("\n");
    }
    printf("\nInverted Image:\n");
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++)
            printf("%d ",inverted[i][j]);
        printf("\n");
    }
    printf("\nTotal white pixels: %d\n",white);
    return 0;
}
