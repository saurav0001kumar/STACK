#include <stdio.h>
void push();
void pop();
void display();
int op,max,top=-1,a[1100],val,x=0;
void main()
{
	if(x==0)
	{
		printf("Enter the size of array:");
		scanf("%d",&max);
	}
	x=1;
	printf("\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n");
	scanf("%d",&op);
	switch(op)
	{
		case 1: push(); break;
		case 2: pop(); break;
		case 3: display(); break;
		case 4: printf("Press any key to Exit."); break;
		default: printf("INVALID INPUT !")	; main();
	}
}
void push()
{
	if(top==max-1)
	{
		printf("\nStack OverFlow !");
		main();
	}
	else
	{
	printf("\nEnter Element:");
	scanf("%d",&val);
	top++;
	a[top]=val;
	main();
	}
}
void pop()
{
	if(top<0 || top==-1)
	printf("\nStack UnderFlow/EMPTY !");
	else
	{
		val=a[top];
		top=top-1;
		printf("\nDeleted Value = %d");
	}
	main();
}
void display()
{
	int i;
	if(top!=-1)
	{
		for(i=top; i>=0; i--)
		printf(" %d ",a[i]);
	}
	else
	printf("\nStack UnderFlow/EMPTY !");
	main();
}
