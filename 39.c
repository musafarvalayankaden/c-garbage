//39
#include<stdio.h>
int main()
{
	char s[100],t[100],c1,c2;
	scanf("%[^\n]",s);
	int len,index1,index2,i,j=0,c=0,k=0;

	for(len=0;s[len];len++);
	char *p,*q;
	p=s;
	q=t;
	int ln=len;
	//////////////////////////////
	for(i=0;;i++)
	{       
		if(s[i]!=' ' && s[i] != 0)
		{	c++;     }
		else
		{
			if(c<ln){
				ln=c;
				index1=i-c;
			} 
                    c=0;             
		}
          if(s[i]==0)
              break; 
	}
         for(j=index1;j<index1+ln;j++)
            { 
              t[k++]=s[j];  
             }
           t[k]=0;
	/////////////////////////////
	printf("%s\n",t);

	return 0;
}

