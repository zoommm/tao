#include <stdio.h>
void say_three_hi(void);
void say_hi(void);
void say_ble(void);
#define  HOW_MANY_TIMES 3

int main(int argc, const char *argv[])
{
    say_hi();
    say_ble();
    say_hi();
    say_ble();
    say_three_hi();
    return 0;
}
void say_hi(void )
{
    printf("fuck everybosy\n");
}
void say_ble(void)
{
    printf("this is good program\nfuck you too\n");
}
int i;
void say_three_hi(void)
{
    for (i = 0; i <HOW_MANY_TIMES; i++) 
    {
        say_hi();
    }
}
