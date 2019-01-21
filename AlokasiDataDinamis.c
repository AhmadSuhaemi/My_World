#include <stdio.h>
#include <stdlib.h>


typedef struct{
	char *name;
	int age;
}person;

int main()
{
	person *myperson = malloc(sizeof(person)); 
	/* 
	Or we can also make the the malloc like this 
	person *myperson;
	
	*myperson = malloc(sizeof(person));
	
	myperson -> name = "Ahmad Suhaemi";
	myperson -> age = 20;
	
	printf("Name = %s\n",myperson->name);
	printf("Age = %d",myperson->age);
	*/
	
	//define value 
	myperson -> name = "Ahmad Suhaemi";
	myperson -> age = 20;
	
	//take the value on myperson using dynamic allocated data 
	printf("Name = %s\n",myperson->name);
	printf("Age = %d",myperson->age);
	
	free(myperson);
	return 0;
}
