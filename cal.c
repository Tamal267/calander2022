#include<stdio.h>
void cal(int len, int startDay){
    printf("Su Mo Tu We Th Fr Sa\n");
    char str[]="____________________";
    puts(str);
    int start=0,count=1;
    int i,j;
    for(i=1;count<=len;i++){
        for(j=1;j<=7;j++){
            if(i==1 && j==startDay){
                start=1;
            }
            if(count>len) {
                start=0;
                break;
            }
            if(start == 1){
                printf("%2d ",count);
                count++;
            }
            else printf("   ");
        }
        printf("\n");
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int sDay[]={7,3,3,6,1,4,6,2,5,7,3,5};
    int len[]={31,28,31,30,31,30,31,31,30,31,30,31};
    char mName[][10]={"January", "February","March","April","May","June","July","August","September","October","November", "December"};
    printf("   %s 2022\n",mName[n-1]);
    cal(len[n-1],sDay[n-1]);
    return 0;
}
