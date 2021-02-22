#include <stdio.h>
#include <stdlib.h>
#define STACKSIZE 25
typedef struct st
{
	int top;
	int data[STACKSIZE];
}Stack;
int pop(Stack* ps)
{
	if (ps->top < 0)
	{
		printf("Stack Bostur \n");
		exit(1);
	}
	return ps->data[ps->top--];
}



void push(Stack* ps, char y)
{
	if (ps->top == STACKSIZE - 1)  
	{
		

		printf("Stack Doludur \n");
		exit(1);
	}
	ps->data[++ps->top] = y;  
	return;
}

int main()
{
	Stack s;
	s.top = -1; 
	
		char metin[100];
		int sayac = 0;
		printf("Metin giriniz:");
		gets(metin);
		while (metin[sayac] != '\0')
			sayac++;
		for (int i = 0; i < sayac; i++) {
			push(&s, metin[i]);
		}
		printf("\n");
		for (int i = 0; i < sayac; i++) {
			printf("%c\n",pop(&s));
		}
		
	return 0;
}