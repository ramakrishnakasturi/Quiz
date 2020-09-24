
#include<dos.h>
#include<process.h>
#include<time.h>
#include<stdlib.h>
#include<stdio.h>
#include"INSTRUCT.H"
#include"PP.H"
#include<string.h>
#include<graphics.h>

 struct details
  {
    char sname[10];
     int sid;
     int smarks;
  }v;
int count=0;
int main()
{
FILE *fp;
int a,b,d,i,j,y,q,o,t;
char ch;


clrscr();
printf("\n\n\t\t******   WELCOME TO QUIZ PROGRAM   ******\n\n\n\n");
printf("______________________________________________________________");
sleep(1);
 do
  {
     printf("\n\n\t1.START\n\t2.INSTRUCTIONS\n\t3.EXIT\n\t4.SCORE LIST\n\tEnter Your Choice\n\n");
     scanf("%d",&a);


     switch(a)
	  {
	       case 1 :

		  printf("\n\n\tENTER YOUR NAME\n");
		  scanf("%s",v.sname);
		  printf("\n\tENTER YOUR ID\n");
		  scanf("%d",&v.sid);
		  clrscr();
		  printf("\n\tENTER YOUR CHOICE\n\t\t1.MATHEMATICS\n\t\t2.PHYSICS\n\t\t3.CHEMISTRY\n");
		  scanf("%d",&j);

		    switch(j)
		      {
		      // count++;

			case 1 :
				 count++;

			 srand(time(NULL));
				 r=rand()%3+1;
				   if(r==1)
				       o=readm1();
				   else if(r==2)

				       o=readm2();
				   else
				       o=readm3();
			break;
		       case 2 :
			     count++;

			      srand(time(NULL));
				r=rand()%3+1;
				  if(r==1)
				     o=readp1();
				  else if(r==2)
				     o=readp2();
				  else
				     o=readp3();
			break;

		       case 3 :
		       count++;

			srand(time(NULL));
				r=rand()%3+1;
				   if(r==1)
				       o=readc1();
				   else if(r==2)
				       o=readc2();
				   else
				       o=readc3();

		       break;
		   }
		 v.smarks=o;

		printf("\n\n\t\tYOUR SCORE IS %d\n",o);
		    fp=fopen("t22.txt","a+");

			     fprintf(fp,"%s %d %d",v.sname,v.sid,v.smarks);

		   fclose(fp);


	      break;
	      case 2:
		    instructions();
	       break;


	      case 3:
		     exit(1);
	       break;

	       case 4:


		       fp=fopen("t22.txt","r");
			 q=count;
		       if(fp==NULL)
			{
			   printf("\n\n\tNO STUDENT HAS TAKEN THE TEST YET");
			    getch();
			   exit(1);
			}

			 printf("NAME     ID        MARKS\n");
		       for(t=0;t<q;t++)
			 {

			   fscanf(fp,"%s %d %d",v.sname,&v.sid,&v.smarks);
			   printf("%s     %d     %d",v.sname,v.sid,v.smarks);
			   printf("\n");

			  }
		       fclose(fp);



	       break;
	       default:
		 printf("\n\n\tENTER A VALID CHOICE\n");

	   }
	   printf("\n\n\tPRESS 1 TO CONTINUE THE TEST......\t\t\n");
	   scanf("%d",&y);
	   next();

 }while(y==1);

return 1;
}
