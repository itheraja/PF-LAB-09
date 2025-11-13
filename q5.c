#include <stdio.h>
int main() {
    int grid[4][4]={{12,15,10,9},{11,8,12,13},{14,13,9,7},{16,11,10,8}};
    int rows=4,cols=4;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            int temp=grid[i][j];
            int cold=1;
            if(i>0 && temp>=grid[i-1][j]) cold=0;
            if(i<rows-1 && temp>=grid[i+1][j]) cold=0;
            if(j>0 && temp>=grid[i][j-1]) cold=0;
            if(j<cols-1 && temp>=grid[i][j+1]) cold=0;
            if(cold) printf("Cold spot at (%d,%d) with %d°C\n",i+1,j+1,temp);
        }
    }
    return 0;
}
