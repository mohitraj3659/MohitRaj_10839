//Palindrome Number Checker
#include <stdio.h>

int main() {
   int num;
   printf("Enter a number : \n");
   scanf("%d",&num);
   int temp=num;
   int rev=0;
   while(temp>0){
    int rem=temp%10;
    rev=(rev*10)+rem;
    temp/=10;
   }
   if(num==rev){
       printf("%d is a palindrom number\n",num);
   }
   else{
       printf("%d is not a palindrom number\n",num);
   }

    return 0;
}
