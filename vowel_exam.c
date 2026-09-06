#include<stdio.h>
#include<string.h>
void rev1_fun(char *);
void rev2_fun(char *,char *);
	char *vowel_fun(char *,char *);
int main()
{
	char s[100],*q,*p,*flag;
	printf("enter a string\n");
	scanf("%[^\n]",s);
	p=s; 
    
        while(q = strchr(p,' '))
	 { 
           flag = vowel_fun(p,q-1);	
           if(flag)
            {
              
            strcpy(p,q+1);
            continue;         
            }
            p = q+1;
           }
      q=strchr(p,'\0');     
      flag = vowel_fun(p,q-1);
             if(flag)
              {
              strcpy(p,q);
              }
 
	printf("%s\n",s);
	return 0;
}




char * vowel_fun(char *p,char *q)
{
     while(p<=q)
      {	
      if(*p=='a'||*p=='e'|| *p=='i'|| *p=='o'|| *p=='u')
	{
		return p;
	}
     p++;
     }

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

