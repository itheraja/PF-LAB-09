#include <stdio.h>
int main() {
    int seats[3][3]={{1,0,1},{0,0,1},{1,1,0}};
    int available=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(seats[i][j]==0){
                available++;
                printf("Available seat at Row %d, Seat %d\n",i+1,j+1);
            }
        }
    }
    printf("Total available seats: %d\n",available);
    return 0;
}
