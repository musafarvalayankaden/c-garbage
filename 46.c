//46//47

#include<stdio.h>
#include<string.h>
void rev1_fun(char *);
void rev2_fun(char *,char *);
char *palindrome_fun(char *,char *);
//char *substring(char * char *);
int main()
{
	char s[100],sub[100],*q,*p,*flag;
        int ln;
	printf("enter a string\n");
	scanf("%[^\n]",s);
	p=s; 
        printf("enter substring\n");
        scanf("%s",sub);
        ln=strlen(sub);
           
        while(q = strstr(p,sub))
       {      
         if(q)
          {
            strcpy(q,q+ln);
           }
         
       }
  
	printf("%s\n",s);
	return 0;
}




char * palindrome_fun(char *p,char *q)
{
     while(p<q)
      {	
      if(*p!=*q)
	{
		return 0;
	}
     p++;
     q--;
     }

	return p;
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

