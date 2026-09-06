//43
#include<stdio.h>
#include<string.h>
int main()
{
	char s[100],t[100],c1,c2;
	scanf("%[^\n]",s);
	int len,index1,ln2,p,q,index2,i,j=0,c=0,k=0;

	for(len=0;s[len];len++);

	
       //////////////////////////////

      for(i=0;i<=len;i++)
        {
          if(s[i]!=' '&&s[i]!='\0') 
            {
               t[k++]=s[i];

            }
          else
           {
              t[k]='\0';    
              ln2=strlen(t);
              k=0;
              if(ln2>4)
               {
                 for(p=i-ln2,q=i-1;p<q;p++,q--)
                    {
                         c=s[p];
                         s[p]=s[q];
                         s[q]=c;
                      
                     }

              }
            }
        }
	/////////////////////////////
	printf("%s",s);

	return 0;
}

