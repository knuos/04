#include <stdio.h>

#define MAX_STACK_SIZE 100
typedef int element;
element stack[MAX_STACK_SIZE];
int top = -1;

int is_empty()
{
	return (top==-1);
}

int is_full()
{
	return (top == (MAX_STACK_SIZE-1));
}

int main() 
{
	int count;
	//write source code below
} 

