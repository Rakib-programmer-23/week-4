/*pass by value
#include<stdio.h>
void fun(int x)
{
    printf("%p\n",&x);
}
int main()
{
    int x=10;
    fun(x);
    printf("%p\n",&x);

    return 0;
}
here,
pass by value means any changes in the fun() function will not affect the main function.
besides,the memory address of the both &x in main() and fun() function are different.
*/
/*pass by refference
#include<stdio.h>
void fun(int *p)
{
     *p=1000;
}
int main()
{
    int x=10;
    fun(&x);
    printf("%d",x);

  
  }
  here,
  pass by refference means if there is any changes in fun() function,the value of the main()
  function will be changes .Becasue we call the fun() function with the addrese of x int the main() function.
*/

