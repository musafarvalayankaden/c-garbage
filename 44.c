//43
#include<stdio.h>
#include<string.h>
int main()
{
	char s[100],t[100],tt[100],c1,c2;
	scanf("%[^\n]",s);
	int len,ln1,index1,ln2,p,q,index2,i,j=0,c=0,k=0;
       scanf(" %[^\n]",t);
	for(len=0;s[len];len++);
        for(ln1=0;t[ln1];ln1++);
	
       //////////////////////////////

      for(i=0;i<=len;i++)
        {
          if(s[i]!=' '&&s[i]!='\0') 
            {
               tt[k++]=s[i];

            }
          else
           {
              tt[k]='\0';    
              ln2=strlen(tt);
              k=0;
              if(ln2==ln1)
               { c=0;
                 for(p=0;p<ln1;p++)
                    {
                       if(t[p]==tt[p])
                         c++;
                     }
                  if(c==ln1)                  
                    {
                    printf("yes\n");
                    return 0;

                    }

                 
              }
             
            }
        }
	/////////////////////////////
      //printf("%s",s);
       printf("no\n");

	return 0;
}

