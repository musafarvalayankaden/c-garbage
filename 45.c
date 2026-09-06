//45
#include<stdio.h>
#include<string.h>
int main()
{
	char s[100],t[100],tt[100],c1,c2,*q,*p;
	scanf("%[^\n]",s);
	int len,ln1,index1,count=0,ln2,index2,i,j=0,c=0,k=0;
       scanf(" %[^\n]",t);
	for(len=0;s[len];len++);
        for(ln1=0;t[ln1];ln1++);
	
       //////////////////////////////
 /*
  for(i=0;i<=len;i++)     
   { 
    for(j=0;j<ln1;j++)
       {
        if(s[i+j]!=t[j])
          break;
       }
        if(j==ln1)
           c++;
                       

  }*/

     p=s;
     while(q=strstr(p,t))
       { 
          c++;
          p = q+ln1;;
       }
	/////////////////////////////
      //printf("%s",s);
       printf("c: %d \n",c);

	return 0;
}

