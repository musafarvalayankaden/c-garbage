#include<stdio.h>
#include<string.h>
void rev1_fun(char *);
void rev2_fun(char *,char *);
int main()
{
	char s[100],*q,*p;
	printf("enter a string\n");
	scanf("%[^\n]",s);
        p=s; 
	
                
		while(q = strchr(p,' ')){
		// rev1_fun(s);
		rev2_fun(p,q-1);
		p = q+1;
                  }

	printf("%s",s);

	return 0;
}

void rev1_fun(char *p)
{
	char *q,t;
	q=p;
	while(*q)
		q++;

	q--;
	while(p<q)
	{
		t=*p;
		*p=*q;
		*q=t;
		p++;
		q--;
	}
}

void rev2_fun(char *p,char *q)
{
	char t;
	while(p<q)
	{
		t=*p;
		*p=*q;
		*q=t;
 
		p++;
		q--;
	}

}

