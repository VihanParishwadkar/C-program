#include<stdio.h>
#define maxsize 100

int main()
{
    char a[maxsize];
    FILE *input , *output;
    input= fopen("input.txt","r");
    if(input==NULL)
    {
        perror("Error in opening the file");
        return 1;

    }
    int i=0,j=0;
    while(!feof(input))
    {
        fscanf(input,"%c",&a[i]);
        i++;
    }
     for(j=0;j<i-1;j++)
    {
        printf("%c\n",a[j]);
    }

    output=fopen("output.txt","w");
    for(j=0;j<i;j++)
    {
        fprintf(output,"%c",a[j]);
    }
    fclose(output);
    return 0;
}
