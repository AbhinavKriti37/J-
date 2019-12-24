#include<string.h>
int main(int argv,char *argc[])
{
system("path C:\Users\hp\AppData\Local\Programs\Python\Python37-32");
system("python compiler3.py ",argc[1]);
argc[1][strlen(argc[1]-1)]='c';
system("path G:\Newfolder\CodeBlocks\MinGW\bin");
system("gcc ",argc[1]);
}
