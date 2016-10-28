/**
 *
 * 不同枚举中，不能存在相同的名字；
 * 同一个枚举中，不能存在相同的枚举值。
 * 注意：K&C教材中一个错误：
 * Values need [not]  be distinct in the same enumeration.
 *
 *
 */
#include <stdio.h>
int main()
{
    enum week { 
        SUN,
        MON,
        TUE,
        WED,
        THU,
        FRI,
        SAT
    } W;
    enum bb {NO=2,YES=3} b;
    printf("请输入一个数字:");
    int k;
    scanf("%d",&k);
    b = (enum bb) k;
    switch(b)
    {
        case NO:
            printf("否定\n");
            break;
        case YES:
            printf("肯定\n");
            break;
        default:
            printf("其他\n");
            break;
    }
    return 0;
}
