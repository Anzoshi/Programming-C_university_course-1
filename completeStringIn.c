#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{   
  unsigned const int size = 10;  
  char ch[size];
  char s[size];
  char sen[size];
  
  puts("inserisci ch: ");
  scanf("%[^\n]%*c", ch);
  //puts("");
  
  
  puts("inserisci s: ");
  scanf("%[^/n]%*c", s);
  //puts(""); // unknown loop stucks program.
  
  
  puts("inserisci sen: ");
  scanf("%[^\n]%*c", sen);
  //puts("");
  
  
  //line 1
  printf("%s\n", ch);
  
  // line 2
  printf("%s\n", s);
  
  //line 3
  printf("%s", sen);
  
    return 0;
}