//48
#include<stdio.h>
#include<string.h>
int main()
{
	char s[100],t[100],tt[1000]="",c1,c2;
	scanf("%[^\n]",s);
	int len,ln1,index1,count=0,ln2,p,q,index2,i,j=0,c=1,k=0;
	//scanf(" %[^\n]",t);
	for(len=0;s[len];len++);
	//for(ln1=0;t[ln1];ln1++);

	//////////////////////////////

	for(i=0;i<=len;i++)    
	{  
		if(s[i]!=' ' && s[i]!='\0')       
		{
			t[j++]=s[i];

		}
		else if(s[i]==' ' || s[i]=='\0')
		{    
                        t[j]='\0';
			ln1=j; 
                        c=1;           
			for(p=0,k=ln1-1;p<k;p++,k--)
			{
				if(t[p]!=t[k]) 
				{   
					c=0;     
					break; 
				}
			} 
			if(c==0)   
			{ if(strlen(tt)>0){
                             strcat(tt, " ");                            
                          }
		            strcat(tt,t);			
			} 
                     j=0;
		
           }
         }	
       
       for(i=0;i<strlen(tt);i++)
           s[i]=tt[i];
        s[i]='\0';
	/////////////////////////////
	//printf("%s",s);
	printf("%s\n",s);

	return 0;
}

