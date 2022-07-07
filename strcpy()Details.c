#include<stdio.h>
#include<string.h>
 
// Created own function called copy() which uses the deeper understanding of the strcpy() function
void copy(char* dst, char* src){
  while (*src != '\0') {
    strcpy(dst, src);
    src++;
    dst++;
  }
  // Adding the null terminating character here to the code, since it was removed from the loop.
  *dst = '\0';
}

// main() function to call the code from
int main(){
  // original string
  char srcString[] = "Deeper understanding of the strcpy() function in C, by breaking down the function and creating my own! Made by Ayman.";
  // copied string from srcString
  char dstString[strlen(srcString+1)] = {};
  copy(dstString, srcString);
  printf("%s", dstString);
}