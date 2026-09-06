#include<stdio.h>
void mainMenu();
void subMenu();
int Check_Prime(int *);
int Check_Perfect(int *);
int Check_Strong(int *);
int Check_Armstrong(int *);
int Check_Palindrome(int *);
void primeRange(int,int);
void perfectRange(int,int);
void strongRange(int,int);
void armstrongRange(int,int);
void palindromeRange(int,int);
int primeCount(int*,int*);
int perfectCount(int*,int*);
int strongCount(int*,int*);
int armstrongCount(int*,int*);
int palindromeCount(int*,int*);
int main()
{
	int choice,subChoice;
	int num,start,end,c ;
	while(1){
		mainMenu();
		printf("Enter Choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: // Prime
				subMenu();
				scanf("%d",&subChoice);
				switch(subChoice)
				{
					case 1:
						printf("Enter Number : ");
						scanf("%d",&num);
						if(Check_Prime( &num))
							printf("Prime Number");
						else
							printf("Not Prime");
						break;
					case 2:
						printf("Enter Start End : ");
						scanf("%d%d",&start,&end);
						primeRange(start,end);
						break;

					case 3:
						printf("Enter Start End : ");
						scanf("%d%d",&start,&end);
						c=primeCount(&start, &end);
						printf("prime count=%d",c);
						break;
					case 4:
						break;
					default:
						printf("Invalid");
				}
				break;
			case 2:
				// Perfect Number Menu
				subMenu();
				scanf("%d",&subChoice);
				switch(subChoice)
				{
					case 1:
						printf("Enter Number : ");
						scanf("%d",&num);
						if(Check_Perfect(&num))
							printf("Perfect Number");
						else
							printf("Not Perfect");
						break;
					case 2:
						printf("Enter Start End : ");
						scanf("%d%d",&start,&end);
						perfectRange(start,end);
						break;

					case 3:
						printf("Enter Start End : ");
						scanf("%d%d",&start,&end);
						c=perfectCount(&start, &end);
						printf("perfect count=%d",c);
						break;
					case 4:
						break;
					default:
						printf("Invalid");
				}
				break;
			case 3:
				// Strong Number Menu

				subMenu();
				scanf("%d",&subChoice);
				switch(subChoice)
				{
					case 1:
						printf("Enter Number : ");
						scanf("%d",&num);
						if(Check_Strong( &num))
							printf("strong Number");
						else
							printf("Not strong");
						break;
					case 2:
						printf("Enter Start End : ");
						scanf("%d%d",&start,&end);
						strongRange(start,end);
						break;

					case 3:
						printf("Enter Start End : ");
						scanf("%d%d",&start,&end);
						c=strongCount(&start, &end);
						printf("strong count=%d",c);
						break;
					case 4:
						break;
					default:
						printf("Invalid");

				}
				break;
			case 4:
				// Armstrong Number Menu
				subMenu();
				scanf("%d",&subChoice);
				switch(subChoice)
				{
					case 1:
						printf("Enter Number : ");
						scanf("%d",&num);
						if(Check_Armstrong( &num))
							printf("armstrong Number");
						else
							printf("Not armstrong");
						break;
					case 2:
						printf("Enter Start End : ");
						scanf("%d%d",&start,&end);
						armstrongRange(start,end);
						break;

					case 3:
						printf("Enter Start End : ");
						scanf("%d%d",&start,&end);
						c=armstrongCount(&start, &end);
						printf("armstrong count=%d",c);
						break;
					case 4:
						break;
					default:
						printf("Invalid");
				}
				break;
			case 5:
				// Palindrome Menu
				subMenu();
				scanf("%d",&subChoice);
				switch(subChoice)
				{
					case 1:
						printf("Enter Number : ");
						scanf("%d",&num);
						if( Check_Palindrome( &num))
							printf("palindrome Number");
						else
							printf("Not palindrome");
						break;
					case 2:
						printf("Enter Start End : ");
						scanf("%d%d",&start,&end);
						palindromeRange(start,end);
						break;

					case 3:
						printf("Enter Start End : ");
						scanf("%d%d",&start,&end);
						c=palindromeCount(&start, &end);
						printf("palindrome count=%d",c);
						break;
					case 4:
						break;
					default:
						printf("Invalid");

				}
				break;
			case 6:
				printf("Thank You");
				break;
			default:
				printf("Invalid Choice");
		}

		break;
	}
	return 0;
}


void mainMenu(void)
{
	printf("\n");
	printf("=== Number Analyzer =======\n");
	printf("1. Prime Number\n");
	printf("2. Perfect Number\n");
	printf("3. Strong Number\n");
	printf("4. Armstrong Number\n");
	printf("5. Palindrome Number\n");
	printf("6. Exit\n");
	printf("=========================\n");
}



void subMenu(void)
{
	printf("1. Check Number\n");
	printf("2. Check Range\n");
	printf("3. Count \n");
	printf("4. Back\n");
	printf("-------------------------\n");
}



int Check_Prime (int *p )
{
	int i;
	for(i=2;i<*p;i++)
	{
		if(*p%i==0)
			break;
	}
	if(*p==i)
		return 1;
	else
		return 0;

	// return 1 if prime
	// return 0 otherwise
}


//int Check_Prime(int *);
int Check_Perfect(int *p)
{
	int fact=0;
	int i;
	for(i=1;i<*p;i++)
	{
		if(*p%i==0)
		{
			fact = fact + i;
		}
	}
	if(fact==*p)
		return 1;
	else
		return 0;


	// return 1 if prime
	// return 0 otherwise
}

int Check_Strong(int *p)
{
	int i,fact=0,a,mul=1;

	for(i=*p;i;i=i/10)
	{
		a=i%10;
                mul=1;
		while(a>1)
		{
			mul=mul*a;
			a--;
		}
		fact=fact+mul;
	}
	if(fact==*p)
		return 1;
	else
		return 0; 
	// return 1 if prime
	// return 0 otherwise
}

int Check_Armstrong(int *p)
{
	int c=0,a,i,j,mul=1,sum=0;

	for(i=*p;i;i=i/10)
        { 	c++;
                      }
	for(i=*p;i;i=i/10){
		a=i%10;
                mul=1;
		for(j=0;j<c;j++)
			mul=mul*a;

		sum=sum+mul;
	}
        if(*p==sum)
          return 1;
        else
          return 0;

	// return 1 if prime
	// return 0 otherwise
}

int Check_Palindrome(int *p)
{
 int rev=0,i,a;     
       
    for(i=*p;i;i=i/10)
       {
        a = i%10;
        rev=rev*10+a;
       }
       if(*p==rev)
        return 1;
       else
        return 0;

	// return 1 if prime
	// return 0 otherwise
}







void primeRange(int n1 ,int n2 )
{
	// print prime number
	int i;
	while(n1<=n2){
		for(i=2;i<n1;i++)
		{
			if(n1%i==0)
				break;
		}
		if(n1==i)
			printf("%d ",i);		

		n1++;
	}

}


void perfectRange(int n1,int n2)
{
	// print prime number
  	int fact=0;
	int i;
     while(n1<=n2){
	for(i=1;i<n1;i++)
	{
		if(n1%i==0)
		{
			fact = fact + i;
		}
	}
	if(fact==n1)
		printf("%d ",n1);
    
        n1++;
	fact=0; 
        }	

}


void strongRange(int n1,int n2)
{
	// print prime number
	int i,fact=0,a,mul=1;
       while(n1<=n2){
	for(i=n1;i;i=i/10)
	{
		a=i%10;
               mul=1;
		while(a)
		{
			mul=mul*a;
			a--;
		}
		fact=fact+mul;
	}
	if(fact==n1)
           printf("%d ",n1);           

          		
            n1++;
            fact=0;
              }


}


void armstrongRange(int n1,int n2)
{
	// print prime number
   	int c=0,a,i,j,mul=1,sum=0;
       while(n1<=n2){
	for(i=n1;i;i=i/10)
        { 	c++;
                      }
	for(i=n1;i;i=i/10){
		a=i%10;
         
	for(j=0,mul=1;j<c;j++)
		mul=mul*a;

	sum=sum+mul;
	}
        if(n1==sum)
          printf("%d ",n1);

        n1++;
        c=0;
        sum=0;
         }
}


void palindromeRange(int n1,int n2)
{
	// print prime number
   int a,i,rev=0;
   while(n1<=n2){
    for(i=n1;i;i=i/10)
       {
        a = i%10;
        rev=rev*10+a;
       }
       if(n1==rev)
        printf("%d ",n1);

    n1++;
    rev=0; 
      }
       
}










int primeCount(int *p ,int *q)
{      int c=0;
	int i;
	while(*p<=*q){
		for(i=2;i<*p;i++)
		{
			if(*p%i==0)
				break;
		}
		if(*p==i){
			c++;
		}
		(*p)++;
	}

	return c;
}



int perfectCount(int *p,int*q)
{
	int c=0;
	int fact=0;
	int i;

     while( *p<= *q){
	for(i=1;i<*p;i++)
	{
		if(*p%i==0)
		{
			fact = fact + i;
		}
	}
	if(fact==*p)
		c++;
    
        (*p)++;
	fact=0; 
        }	


	return c;
}


int strongCount(int *p,int *q)
{
	int c=0;
	int i,fact=0,a,mul=1;
       while(*p<=*q){
	for(i=*p;i;i=i/10)
	{
		a=i%10;
               mul=1;
		while(a)
		{
			mul=mul*a;
			a--;
		}
		fact=fact+mul;
	}
	if(fact==*p)
           c++;        

          		
            (*p)++;
            fact=0;
              }


	return c;
}



int armstrongCount(int *p,int *q)
{
	int count=0;
   	int c=0,a,i,j,mul=1,sum=0;
       while(*p<=*q){
	for(i=*p;i;i=i/10)
        { 	c++;
                      }
	for(i=*p;i;i=i/10){
		a=i%10;
         
	for(j=0,mul=1;j<c;j++)
		mul=mul*a;

	sum=sum+mul;
	}
        if(*p==sum)
          count++;

         (*p)++;
          c=0;
          sum=0;
         }
	return count;
}



int palindromeCount(int *p,int *q)
{
	int c=0;
   int a,i,rev=0;
   while(*p<=*q){
    for(i=*p;i;i=i/10)
       {
        a = i%10;
        rev=rev*10+a;
       }
       if(*p==rev)
        c++;

    (*p)++;
    rev=0; 
      }
	return c;
}




