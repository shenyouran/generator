#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
#define random(a,b)rand()%(b-a+1)+a
char ch;
int x,t,pos;
string filename,a,b;
int find(string s)
{
    for(int i=0;s[i];i++)if(s[i]=='.')return i;
    return -1;
}
void generate(int len,int i)
{       
    if(filename!="NO")
    {
        stringstream ss;
        string num,N;
        char fname[1001];
        if(t==1)
        {
            ss<<filename;
            ss>>fname;
            freopen(fname,"w",stdout);
        }
        else
        {
            ss<<i;
            ss>>N;
            num=filename;
            num.insert(pos,N);
            ss.clear();
            ss<<num;
            ss>>fname;
            freopen(fname,"w",stdout);
        }
    }
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
    cout<<"You will now generate a number + letter sequence.\nType ENTER/RETURN to continue or press any other key then press ENTER/RETURN to abort.";
    ch=getchar();
    if(ch=='\n')
    {
        puts("How many sequences do you want?");
        scanf("%d",&t);
        puts("How many digits do you want?");
        scanf("%d",&x);
        puts("Would you like to write the sequences into a file? Type \"NO\" if you don't want to or type the file name to write into a file. For example, a valid file name is \"data.out\". The data will be generated in \"data1.out,data2.out,...\". If you need only 1 sequence, then the sequence will be written into the filename you have given.");
        cin>>filename;
        pos=find(filename);
        if(pos==-1&&filename!="NO")
        {
            puts("File name format ERROR!");
            return 0;
        }
        puts("Generating, please wait...");
        a=filename.substr(0,pos);
        b=filename.substr(pos+1);
        Sleep(1);
        for(int i=1;i<=t;i++)generate(x,i);
    }
    else puts("Program aborted successfully. Have a nice day.");
}