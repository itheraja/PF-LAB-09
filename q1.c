#include <stdio.h>
int main() {
    int classes[3][4] = {{85,92,78,90},{88,76,95,84},{90,85,88,92}};
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<4;j++) sum+=classes[i][j];
        float avg=sum/4.0;
        printf("Average of Class %d: %.2f\n",i+1,avg);
    }
    return 0;
}
