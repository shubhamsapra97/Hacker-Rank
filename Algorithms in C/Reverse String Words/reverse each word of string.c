#include<stdio.h>
#include<conio.h>
#include<string.h>

int u;
void reverse(char str[],int wordStart,int wordEnd){

    if(u>wordEnd){
        u=wordStart;
        return;
    }

    char k = str[u];
    u++;

    reverse(str,wordStart,wordEnd);

    str[u] = k;
    u++;

    return;

}

int main(){
    int n,on=0,off=0,c=0,i,wordStart=0,wordEnd=0;
    char str[100];

    printf("Enter string");
    gets(str);

    for(i=0;str[i]!='\0';i++){
        if(str[i] == ' '){
            off = 0;
        }
        else{
            if(off==0){
                wordStart = i;
                c++;
            }
            if(str[i+1] == ' ' || str[i+1] == '\0'){
                wordEnd = i;
                u=wordStart;
                reverse(str,wordStart,wordEnd);
            }
            off=1;
        }
    }

    puts(str);


}
