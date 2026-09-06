//41
#include<stdio.h>
int main()
{
	char s1[100],s2[100],c1,c2;
	scanf("%[^\n]",s1);
        scanf(" %[^\n]",s2);  
	int len1,len2,index1,index2,i,j=0,c=0,k=0;

	for(len1=0;s1[len1];len1++);
	for(len2=0;s2[len2];len2++);
	char *p,*q;
//	p=s;
//	q=t;
//	int ln=len;
        if(len1!=len2){
         printf("not anagram\n");
          return 0;}
	//////////////////////////////
	for(i=0;s1[i];i++)
	{ 
          for(j=0;s2[j];j++)
            {
               if(s1[i]==s2[j])
                {
                c++;
                s2[j]=' ';
                break;
                } 
            }      
        }
	/////////////////////////////
	//printf("%s\n",t);
        if(len1==c)
         printf("yes anagram\n");
        else
      { 
         printf("not anagram\n");
         }
	return 0;
}

