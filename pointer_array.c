#include<stdio.h>
#include<string.h>

int main() {
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  char s[] = "Farmer Jack realized that big yellow quilts were expensive!!";

  // Create a pointer to an int called ptr and have it point to the last element in array arr.
int* ptr = &arr[9];
  // Using pointer arithmetic, loop through arr and print the contents in reverse.
for (int i =9; i >=0; i--)
{
printf("%i\n",arr[i]);
ptr--;
}
  // Code for Checkpoint 3 goes here.Create a pointer to a char called ptr2 and set it to point to the first character in string s.
 char* ptr2 =&s[0];
  // Code for Checkpoint 4 goes here.
  //Using pointer arithmetic on ptr2, loop through the string s and replace all the characters with the character ‘#‘.

 for (int x = 0; x < strlen(s); x++)
{
*ptr2= '#';
ptr2++;
}
  printf("%s\n", s);  
}
