/*Name:Deepshikha
Roll No:CS21BTECH11016
ICSE 2018 MATHS 
Q 1(i):The binary operation *:R×R→R is defined
as a*b = 2a+b Find (2*3)*4
*/

#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int top = -1;
int stack[200];
void push(int x){
  top++;
  stack[top] = x;
}

int pop(){
  int y;
  y = stack[top];
  top--;
  return y;
}

int main() {
  char str[100];
  int i, v, op1, op2;
  printf("enter expression:");
  fgets(str,100,stdin);
  
   for(i = 0;i < strlen(str);i++){
    if (isdigit(str[i])){
      push(str[i] - '0');
    }
    if (str[i] == ')'){
        op1 = pop();
        op2 = pop();
        v = op1 + 2*op2;
        push(v);
    }
    else if(str[i]!=')'){
      op1 = pop();
        op2 = pop();
        v = op1 + 2*op2;
        push(v);
    }
 }

    printf("%d\n",pop());
  
  return 0;
}
