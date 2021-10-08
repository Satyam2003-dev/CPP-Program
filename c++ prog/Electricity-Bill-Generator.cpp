#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>

struct customer
 {
   char c_name[20];
   int c_id;
   float price;
 };
 
struct bill
 { 
   int b_id;
   int cid;
   char name[20];
   float price;	
   int unit;
 };
 
 int customer_id()
  {
   int a;
   FILE *fp;
   fp=fopen("cus.txt","r");
    if(fp==NULL) 
      a=1;
    else
      {
       fscanf(fp,"%d",&a);
       a++;
       return a;
      }
   fclose(fp);
   
   fp=fopen("cus.txt","w");
   fprintf(fp,"%d",a);
   fclose(fp);
   
  } 
  
  int bill_id()
  {
   int y;
   FILE *fp;
   fp=fopen("bi.txt","r");
    if(fp==NULL) 
      y=1;
    else
      {
       fscanf(fp,"%d",&y);
       y++;
      }
   fclose(fp);
   
   fp=fopen("bi.txt","w");
   fprintf(fp,"%d",y);
   fclose(fp);
   return y;
  } 
   
 void add_customer()
  {
   FILE *ptr;
   int i;
   struct customer c;
   ptr=fopen("cust.txt","a");
     fflush(stdin);
   printf("\n Enter customer details :- \n Name  -  ");
   gets(c.c_name);
     fflush(stdin);
 
   printf("\n Price of each unit  -  ");
   scanf("%f",&c.price);
   c.c_id=customer_id();
    
       printf("\n Record added successfully.  ");
       printf("\n Your customer id is   %d",c.c_id); 	
    
   fwrite(&c,sizeof(c),1,ptr);
   fclose(ptr);   
 } 
  
 void generate_bill()
  {
   int find,flag=0;
   FILE *ptr,*ptr1;
   struct customer c;
   struct bill b;
   printf("\n Enter your customer id.  ");
   scanf("%d",&find);
    
   ptr=fopen("cust.txt","r");
    while(!feof(ptr))
     {
       fread(&c,sizeof(c),1,ptr);
       if(c.c_id==find)
        { flag=1;
          ptr1=fopen("bill1.txt","a");
          b.b_id=bill_id();
          strcpy(b.name,c.c_name);
          b.price=c.price;
          b.cid=c.c_id;
          printf("\n Enter number of unit consumed in this month.  ");
          scanf("%d",&b.unit);
          fflush(stdin);
          printf("\n Bill has been generated successfully.   ");
          printf("\n Your bill id is   %d",b.b_id);
          fwrite(&b,sizeof(b),1,ptr1);
          fclose(ptr1);
          break;
        }	
     }
   if(flag==0)
      printf("\n Error! No such customer with id no.  %d exist.",find);
   fclose(ptr);	
  }
  
  void display_bill()
 { 
   int flag=0,billid,custid;
   FILE *ptr1;
   struct bill b;
   ptr1=fopen("bill1.txt","r");
   printf("\n Enter your customer id.  ");
   scanf("%d",&custid);
   fflush(stdin);
   printf("\n Enter bill id. whose bill you want to display.  ");
   scanf("%d",&billid);
    while(!feof(ptr1))
     {  fflush(stdin);
     
       fread(&b,sizeof(b),1,ptr1);
        if((b.b_id==billid)&&(b.cid==custid))
         {
           flag++;
           
           printf("\n   Electricity Bill");
           printf("\n   Bill id        :- %d",b.b_id);
           printf("\n   Name           :- %s",b.name);
           printf("\n   Customer id    :-  %d",b.cid);
           printf("\n   Price per unit :- %f",b.price);
           printf("\n   Unit consumed  :- %d",b.unit);
           printf("\n   Total amount   :- %f",b.price*b.unit);
           break;
         }
     } 
  if(flag==0)
      printf("\n Error! No such customer id no.  %d  OR bill no. %d  exist.",custid,billid);
  fclose(ptr1);    
}
  
  void delete_bill()
   {
   
    int flag=0,billid,custid;
    FILE *ptr,*ptr1;
    struct bill b;
 
    ptr=fopen("bill1.txt","r");
    ptr1=fopen("temp.txt","w");	
    printf("\n Enter bill id. whose bill you want to delete.  ");
    scanf("%d",&billid);
     while(!feof(ptr))
      {
       fread(&b,sizeof(b),1,ptr);
        if(b.b_id==billid)
         {
           printf("\n Bill with id no.  %d DELETED successfully.",b.b_id);
           flag=1;
         }
        else
         fwrite(&b,sizeof(b),1,ptr1);
      }
   
    fclose(ptr);  
    fclose(ptr1);
     if(flag==0)
      printf("\n Error! No such bill with id no.  %d  exist.",billid);
    remove("bill1.txt");
    rename("temp.txt","bill1.txt");
   }
  
 main()
  { 
  
char username[20];
	char password[20];
	printf("please enter the username:");
	scanf("%s",username);
	printf("please enter the password: ");
	scanf("%s",password);
	if(strcmp(username,"admin")==0)
	{
		if(strcmp(password,"12345")==0)
		{
			printf("\nwelcome _____login successfull");
		}
		else
		{
			printf("\n invalid password");
			exit(0);
		}
	}
	else
	{
		printf("\n username is invalid");
		exit(0);
	}
   int choice=1;
    while(choice!=5)
     {
      
      printf("\n **************************************  ");
     printf("\n      Electricity Bill Calculator");
      printf("\n **************************************  ");
     
      
      printf("\n  MAIN MENU  ");
      printf("\n  1. Add new customer  "); 	
      printf("\n  2. Bill Generation  ");
      printf("\n  3. Display bill  ");
      printf("\n  4. Delete bill  ");
      printf("\n  5. EXIT ");
      printf("\n Enter your choice    ");
      scanf("%d",&choice);
       switch(choice)
        {
          case 1: add_customer();
                  break;
          case 2: generate_bill();
                  break;        
          case 3: display_bill();
                  break;
          case 4: delete_bill();
                  break;
          case 5: break;	  	  
          default:{
          	   printf("\n\n  Invalid Choice...!");
          	   printf("\n\n Press any key to continue..");
          	   getch();
	  } 	          	  	
        }
     } 	
 }
  

