#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<dos.h>
#include<time.h>
#include<graphics.h>
#define MAX 10
int r;
char z;


void list(int str[],int str1[],int h)
{
int gd=DETECT,gm;
int i,l,k,x=50;
initgraph(&gd,&gm,"C:\\TC\\BGI");
outtextxy(200,20,"SCORE CARD");
for(i=0;i<h;i++)
 {
  if(str[i]==str1[i])
   {
     k=str1[i];
      for(l=1;l<5;l++)
       {
	if(l==k)
	 { circle(2*x+(l-1)*2*x,37.5*(i+1),4);
	   setfillstyle(SOLID_FILL,GREEN);
	   floodfill(2*x+(l-1)*2*x,37.5*(i+1),WHITE);
	 }
	 else
	  {
	    circle(2*x+(l-1)*2*x,37.5*(i+1),4);
	    setfillstyle(SOLID_FILL,WHITE);
	    floodfill(2*x+(l-1)*2*x,37.5*(i+1),WHITE);
	   }
	}
     }
	  else
	  {
	    for(l=1;l<5;l++)
	    {
	      if(str[i]==l)
	      {
	       circle(2*x+(l-1)*2*x,37.5*(i+1),4);
	       setfillstyle(SOLID_FILL,RED);
	       floodfill(2*x+(l-1)*2*x,37.5*(i+1),WHITE);
	       }
	       else if (str1[i]==l)
		{ circle(2*x+(l-1)*2*x,37.5*(i+1),4);
		  setfillstyle(SOLID_FILL,GREEN);
		  floodfill(2*x+(l-1)*2*x,37.5*(i+1),WHITE);
		  }
		 else
		 {
		 circle(2*x+(l-1)*2*x,37.5*(i+1),4);
		 setfillstyle(SOLID_FILL,WHITE);
		  floodfill(2*x+(l-1)*2*x,37.5*(i+1),WHITE);
		  }
	       }
	     }
    }
       for(i=1;i<11;i++)
	{
	   outtextxy(80,36.5*i, "1. ");
	   outtextxy(180,36.5*i,"2. ");
	   outtextxy(280,36.5*i,"3. ");
	   outtextxy(380,36.5*i,"4. ");
	 }

      {
       outtextxy(20,36.5*1," Q[1]  ");
       outtextxy(20,36.5*2," Q[2]  ");
       outtextxy(20,36.5*3," Q[3]  ");
       outtextxy(20,36.5*4," Q[4]  ");
       outtextxy(20,36.5*5," Q[5]  ");
       outtextxy(20,36.5*6," Q[6]  ");
       outtextxy(20,36.5*7," Q[7]  ");
       outtextxy(20,36.5*8," Q[8]  ");
       outtextxy(20,36.5*9," Q[9]  ");
       outtextxy(20,36.5*10,"Q[10] ");

    }
      outtextxy(50,400,"press 1 to continue...");
      getch();
      closegraph();
    return ;
}







int readm1()
{
 int str[MAX],str1[MAX]={1,2,3,4,3,2,1,4,2,3};
 int k,l,m,o=0;
 FILE *fp;
 time_t initial_time;
 int time_limit=20;
 clrscr();
 fp=fopen("v1.txt","r");
 initial_time=time(NULL);
  for(k=0;k<10;k++)
 {
    while((z=getc(fp))!='\n')
    printf("%c",z);
    printf("\n");
    while((z=getc(fp))!='\n')
    {
      fseek(fp,0,1);
      printf("%c",z);
    }
    printf("\n");
    CHOICE :
    printf("\n\n\tEnter a Your Choice\n");

    scanf("%d",&l);
      if(l<=0 || l>4)
	{
	 printf(" ** plzzz enter a valid option **\n");
	    goto CHOICE;
	 }
      else
       str[k]=l;


  clrscr();
	if((time(NULL)-initial_time)<time_limit)
	  continue;
	else
	{
	  printf("time is up !!!!\n");
          printf("We are calculating your score..........\n");
	  sleep(3);
	  break;
	 }

   }
fclose(fp);
   for(m=0;m<=k;m++)
 {
   if(str[m]==str1[m])
   o++;
 }
  for(m=k+1;m<MAX;m++)
  {
    str[m]=0;
  }
 list(str,str1,k);
 return o;
}


int readm2()
{
  int str[MAX],str1[MAX]={3,2,2,1,3,4,2,4,4,4};

 char z;
 int k,l,m,o=0;
 FILE *fp;
 time_t initial_time;
 int time_limit=20;
 clrscr();
 fp=fopen("v2.txt","r");
 initial_time=time(NULL);
 for(k=0;k<10;k++)
 {
    while((z=getc(fp))!='\n')
    printf("%c",z);
    printf("\n");
    while((z=getc(fp))!='\n')
    {
      fseek(fp,0,1);
      printf("%c",z);
    }
    printf("\n");
    CHOICE :
    printf("\n\n\tEnter your choice\n");


    scanf("%d",&l);
	  if(l<=0 || l>4)
	    {
	      printf(" ** plzzz enter a valid option **\n");
	      goto CHOICE;
	    }
     else

   str[k]=l;

clrscr();
	  if((time(NULL)-initial_time)<time_limit)
	  continue;
	else
	{
	  printf("time is up !!!!\n");
          printf("We are calculating your score..........\n");
	  sleep(3);
	  break;
	 }

}
 fclose(fp);
 for(m=0;m<=k;m++)
 {
   if(str[m]==str1[m])
   o++;
 }
 for(m=k+1;m<MAX;m++)
  {
    str[m]=0;
  }
list(str,str1,k);
 return o;
}

int readm3()
{
int str[MAX],str1[MAX]={4,2,3,2,3,2,1,3,4,1};

 char z;
 int k,l,m,o=0;
 FILE *fp;
 time_t initial_time;
 int time_limit=20;
 clrscr();

 fp=fopen("v3.txt","r");
 initial_time=time(NULL);
 for(k=0;k<10;k++)
 {
    while((z=getc(fp))!='\n')
    printf("%c",z);
    printf("\n");
    while((z=getc(fp))!='\n')
    {
      fseek(fp,0,1);
      printf("%c",z);
    }
    printf("\n");
    CHOICE :
    printf("\n\n\tEnter your choice\n");
       scanf("%d",&l);
	     if(l<=0 || l>4)
	       {
		  printf(" ** plzzz enter a valid option **\n");
		  goto CHOICE;
		}
	     else
	     str[k]=l;


clrscr();
	   if((time(NULL)-initial_time)<time_limit)
	  continue;
	else
	{
	  printf("time is up !!!!\n");
          printf("We are calculating your score..........\n");
	  sleep(3);
	  break;
	 }

 }
 fclose(fp);

for(m=0;m<=k;m++)
 {
   if(str[m]==str1[m])
   o++;
 }
for(m=k+1;m<MAX;m++)
  {
    str[m]=0;
  }
list(str,str1,k);
 return o;
}



int readp1()
{
int str[MAX],str1[MAX]={1,2,1,2,1,1,3,3,2,3};

 char z;
 int k,l,m,o=0;
 FILE *fp;
 time_t initial_time;
 int time_limit=20;
 clrscr();
 fp=fopen("v4.txt","r");
 initial_time=time(NULL);
 for(k=0;k<10;k++)
 {
    while((z=getc(fp))!='\n')
    printf("%c",z);
    printf("\n");
    while((z=getc(fp))!='\n')
    {
      fseek(fp,0,1);
      printf("%c",z);
    }
    printf("\n");
    CHOICE :
    printf("\n\n\tEnter your choice\n");
    scanf("%d",&l);
		 if(l<=0 || l>4)
	       {
		  printf(" ** plzzz enter a valid option **\n");
		  goto CHOICE;
		}
	     else

    str[k]=l;
    clrscr();
      if((time(NULL)-initial_time)<time_limit)
	  continue;
	else
	{
	  printf("time is up !!!!\n");
  	  printf("We are calculating your score..........\n");
	  sleep(3);
	  break;
	 }
 }
 fclose(fp);
 for(m=0;m<=k;m++)
 {
   if(str[m]==str1[m])
   o++;
 }
  for(m=k+1;m<MAX;m++)
  {
    str[m]=0;
  }
list(str,str1,k);
 return o;
}



int readp2()
{
int str[MAX],str1[MAX]={3,3,3,4,3,2,2,4,1};

 char z;
 int k,l,m,o=0;
 FILE *fp;
 time_t initial_time;
 int time_limit=20;
 clrscr();
 fp=fopen("v5.txt","r");
 initial_time=time(NULL);
 for(k=0;k<10;k++)
 {
    while((z=getc(fp))!='\n')
    printf("%c",z);
    printf("\n");
    while((z=getc(fp))!='\n')
    {
      fseek(fp,0,1);
      printf("%c",z);
    }
    printf("\n");
    CHOICE :
    printf("\n\n\tEnter your choice\n");
    scanf("%d",&l);
		 if(l<=0 || l>4)
	       {
		  printf(" ** plzzz enter a valid option **\n");
		  goto CHOICE;
		}
	     else

    str[k]=l;
    clrscr();
	if((time(NULL)-initial_time)<time_limit)
	  continue;
	else
	{
	  printf("time is up !!!!\n");
	 printf("We are calculating your score..........\n");
	  sleep(3);
	  break;
	 }
 }
 fclose(fp);
 for(m=0;m<=k;m++)
 {
   if(str[m]==str1[m])
   o++;
 }
 for(m=k+1;m<MAX;m++)
  {
    str[m]=0;
  }
list(str,str1,k);
 return o;

}



int readp3()
{
int str[MAX],str1[MAX]={1,1,1,4,2,4,1,4,4,3};

 char z;
 int k,l,m,o=0;
 FILE *fp;
 time_t initial_time;
 int time_limit=20;
 clrscr();
 fp=fopen("v6.txt","r");
 initial_time=time(NULL);
 for(k=0;k<10;k++)
 {
    while((z=getc(fp))!='\n')
    printf("%c",z);
    printf("\n");
    while((z=getc(fp))!='\n')
    {
      fseek(fp,0,1);
      printf("%c",z);
    }
    printf("\n");
    CHOICE :
    printf("\n\n\tEnter your choice\n");
    scanf("%d",&l);
		 if(l<=0 || l>4)
	       {
		  printf(" ** plzzz enter a valid option **\n");
		  goto CHOICE;
		}
	     else

    str[k]=l;
    clrscr();
       if((time(NULL)-initial_time)<time_limit)
	  continue;
	else
	{
	  printf("time is up !!!!\n");
	  printf("We are calculating your score..........\n");
	  sleep(3);
	  break;
	 }
 }
 fclose(fp);
 for(m=0;m<=k;m++)
 {
   if(str[m]==str1[m])
   o++;
 }
  for(m=k+1;m<MAX;m++)
  {
    str[m]=0;
  }
list(str,str1,k);
 return o;

}



int readc1()
{
int str[MAX],str1[MAX]={1,2,3,4,2,1,1,3,2,1};

 char z;
 int k,l,m,o=0;
 FILE *fp;
 time_t initial_time;
 int time_limit=20;
 clrscr();
 fp=fopen("v7.txt","r");
 initial_time=time(NULL);
 for(k=0;k<10;k++)
 {
    while((z=getc(fp))!='\n')
    printf("%c",z);
    printf("\n");
    while((z=getc(fp))!='\n')
    {
      fseek(fp,0,1);
      printf("%c",z);
    }
    printf("\n");
    CHOICE :
    printf("\n\n\tEnter your choice\n");
    scanf("%d",&l);
		 if(l<=0 || l>4)
	       {
		  printf(" ** plzzz enter a valid option **\n");
		  goto CHOICE;
		}
	     else

    str[k]=l;
    clrscr();
	if((time(NULL)-initial_time)<time_limit)
	  continue;
	else
	{
	  printf("time is up !!!!\n");
	  printf("We are calculating your score..........\n");
	  sleep(3);
	  break;
	 }
 }
 fclose(fp);
 for(m=0;m<=k;m++)
 {
   if(str[m]==str1[m])
   o++;
 }
 for(m=k+1;m<MAX;m++)
  {
    str[m]=0;
  }
list(str,str1,k);
 return o;
}



int readc2()
{
int str[MAX],str1[MAX]={4,2,3,1,1,4,3,4,1,3};

 char z;
 int k,l,m,o=0;
 FILE *fp;
 time_t initial_time;
 int time_limit=20;
 clrscr();
 fp=fopen("v8.txt","r");
 initial_time=time(NULL);
 for(k=0;k<10;k++)
 {
    while((z=getc(fp))!='\n')
    printf("%c",z);
    printf("\n");
    while((z=getc(fp))!='\n')
    {
      fseek(fp,0,1);
      printf("%c",z);
    }
    printf("\n");
    CHOICE :
    printf("\n\n\tEnter your choice\n");
    scanf("%d",&l);
		 if(l<=0 || l>4)
	       {
		  printf(" ** plzzz enter a valid option **\n");
		  goto CHOICE;
		}
	     else

    str[k]=l;
    clrscr();
	   if((time(NULL)-initial_time)<time_limit)
	  continue;
	else
	{
	  printf("time is up !!!!\n");
          printf("We are calculating your score..........\n");
	  sleep(3);
	  break;
	 }
 }
 fclose(fp);
 for(m=0;m<=k;m++)
 {
   if(str[m]==str1[m])
   o++;
 }
 for(m=k+1;m<MAX;m++)
  {
    str[m]=0;
  }
list(str,str1,k);
 return o;
}



int readc3()
{
int str[MAX],str1[MAX]={4,1,2,2,3,3,3,3,3,1};

 char z;
 int k,l,m,o=0;
 FILE *fp;
 time_t initial_time;
 int time_limit=20;
 clrscr();
 fp=fopen("v9.txt","r");
 initial_time=time(NULL);
 for(k=0;k<10;k++)
 {
    while((z=getc(fp))!='\n')
    printf("%c",z);
    printf("\n");
    while((z=getc(fp))!='\n')
    {
      fseek(fp,0,1);
      printf("%c",z);
    }
    printf("\n");
    CHOICE :
    printf("\n\n\tEnter your choice\n");
    scanf("%d",&l);
		 if(l<=0 || l>4)
	       {
		  printf(" ** plzzz enter a valid option **\n");
		  goto CHOICE;
		}
	     else

    str[k]=l;
    clrscr();
	if((time(NULL)-initial_time)<time_limit)
	  continue;
	else
	{
	  printf("time is up !!!!\n");
          printf("We are calculating your score..........\n");
	  sleep(3);
	  break;
	 }
 }
 fclose(fp);
 for(m=0;m<=k;m++)
 {
   if(str[m]==str1[m])
   o++;
 }
 for(m=k+1;m<MAX;m++)
  {
    str[m]=0;
  }
list(str,str1,k);
 return o;
}




