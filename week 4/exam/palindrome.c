#include<stdio.h>
#include<string.h>
void _palindrome(char s,int size,int z)
{
  
    for(int i=size-1;i>=0;i--)
    {
        int z;
     s[z]=s[i];
     z++;
      
    }

    
 


}
int main()
{
    char s[10];
    int j=0;
    scanf("%s",s);
    int size=strlen(s);
    _palindrome(s,size,j);

    return 0;
}