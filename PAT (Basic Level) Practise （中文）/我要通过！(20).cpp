#include<iostream>
#include<string.h>
#define MaxLen 100
using namespace  std;

bool CheckIsOk(char *str, int len)
{
 int i = 0;
 int p_pos = -1, t_pos = -1, p_count = 0, t_count = 0;
 for (i = 0; i < len; i++)
 {
  if (str[i] != 'P'&&str[i] != 'A'&&str[i] != 'T')
   return false;
  if (str[i] == 'P')
  {
   p_pos = i;
   p_count++;
  }
  if (str[i] == 'T')
  {
   t_pos = i;
   t_count++;
  }
 }
 if (p_count != 1 || t_count != 1 ||t_pos-p_pos<2||p_pos*(t_pos-p_pos-1)!=(len-t_pos-1))
  return false;
 return true;
}
 
int main() 
{ 
 int n; 
 char str[MaxLen]; 
 cin >> n; 
 while (n--) 
 { 
  cin >> str; 
  if (CheckIsOk(str, strlen(str))) 
   cout << "YES\n"; 
  else 
   cout << "NO\n"; 
 } 
 return 0; 
} 