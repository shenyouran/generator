#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#define random(a,b)rand()%(b-a+1)+a
char ch;
int x,t;
void print(const char *str)
{
    while(*str)putchar(*str++);
}
void generate(int len)
{
    while(len--)
    {
        int n=random(0,2);
        switch(n)
        {
            case 0:
            {
                putchar(random(48,57));
                break;
            }
            case 1:
            {
                putchar(random(65,90));
                break;
            }
            case 2:
            {
                putchar(random(97,122));
                break;
            }
        }
    }
    putchar('\n');
}
int main()
{
    srand(time(NULL));
    print("You will now generate a number + letter sequence.\nType ENTER/RETURN to continue or any other letter to abort.");
    ch=getchar();
    if(ch=='\n')
    {
        puts("How many sequences do you want?");
        scanf("%d",&t);
        puts("How many digits do you want?");
        scanf("%d",&x);
        puts("Generating...");
        Sleep(1);
        while(t--)generate(x);
    }
    else puts("Thank you for stopping by.");
}