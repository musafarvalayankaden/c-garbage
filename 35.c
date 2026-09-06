//35
#include<stdio.h>
int main()
{
	char s[100],t[100],c1,c2;
	scanf("%[^\n]",s);
	int len,index1,index2,i,j=0,c=0,k,word_start=0;

	for(len=0;s[len];len++);
	char *p,*q;
	p=s;
	q=t;

	//////////////////////////////
	for(i=0;s[i] || j>0;i++)
         {
              if(s[i]!=' ' && s[i]!='\0')
               t[j++]=s[i];

              if(s[i]==' '||s[i]=='\0')
               { t[j]=0;
                   for(len=0;t[len];len++);
                 
                   for(j=0,k=len-1;j<k;j++,k--)
                     {
                        c = t[j];
                        t[j]=t[k];
                        t[k]=c; 
                      }

                    for(c=0;t[c];c++)
                      s[word_start+c]=t[c];
                          word_start = i+1;  
                  j=0;
                  if(s[i]=='\0')
                   break;
                 }

          }
        /////////////////////////////
	printf("%s",s);

	return 0;
}

