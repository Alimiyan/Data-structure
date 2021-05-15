#include<stdio.h>
#include<stdlib.h>
#define MAXSTACKSIZE 100
#define MAXEXPRSIZE 100
char symbol;
typedef enum{
    lparen,rparen,plus,minus,times,divide,mode,eos,operand
}precedence;
precedence gettoken();
void push();
int pop();
int stack[MAXSTACKSIZE];
char expr[MAXEXPRSIZE];
int top=-1;
int n=0;
int eval(){
   precedence token;
   int operator,operand,op1,op2;
   token=gettoken();
   while(token!=eos){
       if(token==operand){
           push(symbol-'0');
       }else{
           op2=pop();
           op1=pop();
           switch(token){
               case plus:push(op1+op2);
               break;
               case minus:push(op1-op2);
               break;
               case times:push(op1*op2);
               break;
               case divide:push(op1/op2);
               break;
               case mode:push(op1%op2);
               break;
           }
       }token=gettoken();
   }return pop();
}
precedence gettoken(){
    symbol=expr[n++];
    switch(symbol){
        case '(':return lparen;
        break;
        case ')':return rparen;
        break;
        case '+':return plus;
        break;
        case '-':return minus;
        break;
        case '*':return times;
        break;
        case '/':return divide;
        break;
        case '%':return mode;
        break;
        case '\0':return eos;
        break;
        default:return operand;
        break;
    }
}
void push(int val){
        stack[++top]=val;
}
int pop(){
        return stack[top--];
}
void main(){
    printf("enter the expression\n");                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            
    scanf("%s",expr);
    printf("%s= %d",expr,eval());
}