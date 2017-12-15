#include "stdio.h"
#include "stdlib.h"
 void getWord(FILE *fp,int *num_char,int *num_word){
    char ch;
    do{
        *num_char=*num_char+1;
        ch=fgetc(fp);
    }while((ch>='a'&&ch<'z')||(ch>='A'&&ch<='Z')||ch=='_');
    *num_word=*num_word+1;
    fseek(fp,-1,SEEK_CUR);
}

int main(int argc, char* argv[])
{   
    FILE *fp;
    char ch;
    int num_word=0,num_line=0,num_char=0,flag;
    fp=fopen("text.txt","a+");
    if(fp==NULL){
        printf("the file open bit");
    }
    while(!feof(fp)){
        ch=fgetc(fp);
        if((ch>='a'&&ch<'z')||(ch>='A'&&ch<='Z')){
            getWord(fp,&num_char,&num_word);
        }
        else if(ch=='\n'){
            num_line++;
        }
        else if(ch=='\0'||ch=='\t'){
            flag=1;
        }
        else
            num_char+=1;
    }
    fclose(fp);
    printf("字符数为:%d",num_char);
    printf("\n");
    printf("单词数为:%d",num_word);
    printf("\n");
    printf("行数为:%d",num_line);
    printf("\n");
    return 0;

}
