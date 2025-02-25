#include "Stack.h"

Stack::Stack()
{
	setTop(0);
	for (size_t i = 0; i<SIZE; i++)
		setStack('\0'); //Αρχικοποίησε τη στοίβα με τον τερματικό χαρακτήρα ενός αλφαριθμητικού
}

void Stack::setStack(char temp)
{
	stack[getTop()] = temp;
}

void Stack::setTop(int top)
{
	this->top = top;
}

char Stack::getStack() const
{
	return stack[getTop()];
}

int Stack::getTop() const
{
	return top;
}

void Stack::print()
{
	for(size_t i=0; i<strlen(stack); i++)
		cout<<pop()<<"'"<<endl;
}

void Stack::push(char ch)
{
	if(getTop()==SIZE)
		cerr<<"Cannot push '" << ch <<"'! Stack is FULL!\n\a";
	else
	{
		cout<<"'" << ch <<"' was pushed!\n";
		setStack(ch);
		setTop(getTop()+1);
	}
}

char Stack::pop()
{
	if(getTop()==0)
	{
		cerr<<"Cannot pop anything! Stack is EMPTY!\a";
		return '\0';  //Επίστρεψε τον τερματικό χαρακτήρα ενός αλφαριθμητικού
	}
	else
	{
		setTop(getTop()-1);
		cout<<"'"<<getStack() <<"' was popped!   --->   '";
		
		return getStack();
	}
}
