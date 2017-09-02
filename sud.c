#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdarg.h>

#define MAX_NAMES
#define MAX_NAMELENGTH 

int add(int arr[100], int size)
{
  int  i, n;
  char position,value;
  
  printf("Enter location you want to insert \n");
  scanf("%c", &position);
  
  
  for(i=n-1; i>=position - 1; i--)
  {
  arr[i+1]=arr[i];
  }
  
  arr[position-1]=value;
  printf("Resultant array is \n");
  
  for(i=0; i<=n ; i++)
  {
  printf("%d\n",arr[i]);
  }
  
  return 0;
  }     
 
int main(int argc,char* agrv[])
{
  int a,i;
  
  printf("Select action you want to perform \n");
  printf("1: Add");
  printf("2: Find");
  scanf("%d", &a);
  
  if(argc==1)
  {
  printf("add");
  for(i=0;argv[1][i] != 0;i++)
  {
  char c = argv[1][i]; 
  }
  }
  
  if(argc==2)
  {
  find(arr[MAX_NAMES][MAX_NAMELENGTH],i);
  }
  
  
  getchar();
  return 0;
}


int find(char arr[MAX_NAMES][MAX_NAMELENGTH],int i)
{
	int j,x,size,count;
	char name[100];
	printf("Now enter a name in which you would like to search a list for:");
	scanf("%s", arr);
	
	for(i=0; i< size;i++)
	{
	if(strcmp(arr , name[i]) ==0)
	{
		return i;
		count++;
	}
	
	else
	{
	return -1;
	}
	}
}
