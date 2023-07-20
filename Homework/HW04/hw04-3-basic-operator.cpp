
/*
    จงกรอกหมายเลขทั้งหมดจำนวน 3 ค่า และแสดงผลรวมดังแสดงดังผลลัพธ์ด้านล่าง
    
    Test case:
        2 3 1
    Output:
        Answer = 6

    Test case:
        4 -1 3
    Output:
        Answer = 6
*/
#include <stdio.h>  
int main() {
    int a,b,c,ans;

    printf("Input a : ");
    scanf("%d",&a);
    printf("Input b : ");
    scanf("%d",&b);
    printf("Input c : ");
    scanf("%d",&c);
    ans = a+b+c;
    printf("Answer = %d",ans);
}