#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<time.h>
int tmz=1300;
void timings(int tm);
int i,n,k,u;
void header()
{
    printf("\nFlight                Price   Seating Capacity    Available Seats\n");
}
void option1()
{
    printf("\nFlight                           Price   Seating Capacity    Available Seats\n");
    printf(" 101 Delhi to Pune(1300hrs)         5000    100                    16\n");
    printf(" 102 Mumbai To Chennai(1700hrs)     5,000   75                     5\n");
    printf(" 103 Bangalore To Kolkata(2000hrs)  5,000   100                    24\n");
}
void option2()
{
    printf("\nFlight                          Price   Seating Capacity    Available Seats\n");
    printf(" 111 Delhi to Pune(1300hrs)         5000   100                 18\n");
    printf(" 112 Mumbai To Chennai(1700hrs)     5000   75                  24\n");
    printf(" 113 Bangalore To Kolkata(2000hrs)  5,000   100                65\n");
}
void option3()
{
    printf("\nFlight                           Price   Seating Capacity    Available Seats\n");
    printf("  121 Delhi to Pune(1300hrs)        5,000   100                 46\n");
    printf("  122 Mumbai To Chennai(1700hrs)    5000    75                  16\n");
    printf("  123 Bangalore To Kolkata(2000hrs) 5,000   100                 85\n");
}  
void option4()
{
    printf("\nFlight                      Price      Seating    Capacity    Available Seats\n");
    printf(" 301 Delhi to Thailand(1400hrs)          100000      100               16\n");
    printf(" 302 Mumbai To USA (1800hrs)             100,000      75                5\n");
    printf(" 303 Bangalore To Singapore(2100hrs)     100,000     100               24\n");
}
void option5() 
{
    printf("\nFlight                             Price   Seating Capacity    Available Seats\n");
    printf(" 311 Delhi to Thailand(1400hrs)       100000   100                16\n");
    printf(" 312 Mumbai To USA(1800hrs)           100,000   75                5\n");
    printf(" 313 Bangalore To Singapore(2100hrs)  100,000   100               24\n");
}
void option6()
{
    printf("\nFlight                               Price   Seating Capacity    Available Seats\n");
    printf(" 321 Delhi to Thailand(1400hrs)        100000     100                16\n");
    printf(" 322 Mumbai To USA(1800hrs)            100,000     75                5\n");
    printf(" 323 Bangalore To Singapore(2100hrs)   100,000    100               24\n");
}
struct flight{
    int ticket;
    int  phone;
    char name[20], address[100];
    char seatpos[2];
    int time;

};
int x=1;
struct flight book[10];

int a,tm,n;



void timings( tm)
{
	
                    if(book[tm].ticket==101|| book[tm].ticket==111 || book[tm].ticket==121)
                    book[tm].time =1300;
                    else  if(book[tm].ticket==102 || book[tm].ticket==122 || book[tm].ticket==112)
                    book[tm].time = 1700;
                    else  if(book[tm].ticket==103|| book[tm].ticket==113 ||book[tm].ticket==123)
                    book[tm].time = 2000;
                    else  if(book[tm].ticket==301 || book[tm].ticket==311 || book[tm].ticket==321)
                    book[tm].time = 1400;
                    else  if(book[tm].ticket==302||book[tm].ticket==312 || book[tm].ticket==322)
                    book[tm].time = 1800;
                    else  if(book[tm].ticket==303|| book[tm].ticket==313 || book[tm].ticket==323)
                    book[tm].time = 2100;
                    
                   
}
int choice()
{
}
 
     int price=5000, phone;
    char name[20], address[100],emailid[30];
    char user[50]="sarah", pw[50]="password", user1[50]="sarah", pw1[50]="password" , admin1[50], pwa[50]="admin",admin[50]="admin",pwa1[50];
    int trip, date, date2, y;
    float total;
    char date1[40]="August 1,2019";
    
    

    char repeat;
    char terminal[10]="T1";
    int select,opt;
int main() 
{int num;
int seatno[20];
srand(time(NULL));
for(num=0;num<x;num++)
{seatno[num]= ( rand()%40 ) + 1;
if(seatno[num]==0)
seatno[num]=seatno[num]+1;
}
int options,y;
d:
    printf("Select one option: \n 1. New User \n 2. Old User \n 3. Admin");
    scanf("%d",&options);
    if(options==1)
    {
	xy:
    printf("\nEnter new username: ");
    scanf("%s", &user);
    strcpy(user1,user);
    printf("\nEnter password: ");
    scanf("%s", &pw);
    strcpy(pw1,pw);
    printf("\nEnter email id:");
    scanf("%s", &emailid);
        printf("\nWelcome");
        printf("\nChoose : ");
        printf("\n1. Domestic \n2. International\n");
        scanf("\n%d", &trip);
        if(trip==1)
        strcpy(terminal,"T1");
        else 
        {strcpy(terminal,"T3");
		}
        printf("\nDate: ");
        printf("\n1. August 10, 2019 \n2. August 11, 2019\n3. August 12, 2019\n");
        scanf("%d", &date);
        switch (trip)
        {
        case 1: 
        {
        	strcpy(terminal, "T1");
        
            if (date==1)
            {
                printf("\nAugust 10, 2019\n");
                strcpy(date1, "August 10, 2019");
                option1();
                printf("\nHow many tickets you want?:");
                scanf("%d", &x);
                for (a=0; a<x; a++)
                {
                    printf("\nPlease select which flight you will book: ");
                    scanf("%d", &book[a].ticket);
                    timings(a);
                     printf("Enter name");
                    scanf("%s",&book[a].name);
                    printf("Enter phone no");
                    scanf("%d",&book[a].phone);
                    printf("Enter address");
                    scanf("%s",&address);
                    printf("Prefered seat A/M/W");
                    scanf("%s",&book[a].seatpos);
                }
                price=x*5000;
            }
            else if (date==2)
            {
            printf("\nAugust 11, 2019\n");
            strcpy(date1, "August 11, 2019");
            option2();
            printf("\nHow many tickets will you get?:  ");
            scanf("%d", &x);
            for (a=0; a<x; a++)
                {
                    printf("\nPlease select which flight you will book: ");
                    scanf("%d", &book[a].ticket);
                    timings(a);
                     printf("Enter name");
                    scanf("%s",&book[a].name);
                    printf("Enter phone no");
                    scanf("%d",&book[a].phone);
                    printf("Enter address");
                    scanf("%s",&address);
                    printf("Prefered seat A/M/W");
                    scanf("%s",&book[a].seatpos);
                }
                price=x*5000;
            }
            else if (date==3)
            {
                printf("\nAugust 12, 2019\n");
                strcpy(date1, "August 12, 2019");
                option3();
                printf("\nHow many tickets do you want?: ");
                scanf("%d", &x);
                for (a=0; a<x; a++)
                {
                    printf("\nPlease select which flight you will book: ");
                    scanf("%d", &book[a].ticket);
                    timings(a);
                     printf("Enter name");
                    scanf("%s",&book[a].name);
                    printf("Enter phone no");
                    scanf("%d",&book[a].phone);
                    printf("Enter address");
                    scanf("%s",&address);
                    printf("Prefered seat A/M/W");
                    scanf("%s",&book[a].seatpos);
                }
                price=x*5000;
            }
            else printf("\nInvalid");
            break;
        }
        case 2:
            {
            	strcpy(terminal,"T3");
            if (date==1)
            {
                printf("\nAugust 10, 2019\n");
                strcpy(date1, "August 10, 2019");
                option4();
               
                printf("\nHow many tickets will you get (excluding the return trip)?: ");
                scanf("%d", &x);
                for (a=0; a<x; a++)
                {
                    printf("\nPlease select which flight you will book: ");
                    scanf("%d", &book[a].ticket);
                    timings(a);
                     printf("Enter name");
                    scanf("%s",&book[a].name);
                    printf("Enter phone no");
                    scanf("%d",&book[a].phone);
                    printf("Enter address");
                    scanf("%s",&address);
                    printf("Prefered seat A/M/W");
                    scanf("%s",&book[a].seatpos);
                    
                    }
                    price=x*100000;
                   
                        
                    }
                
                    
                
            
            else if (date==2)
            {
            printf("\nAugust 11, 2019\n");
            strcpy(date1, "August 11, 2019");
            option5();
            printf("\nHow many tickets will you get?: ");
            scanf("%d", &x);
            for (a=0; a<x; a++)
                {
                    printf("\nPlease select which flight you will book: ");
                    scanf("%d", &book[a].ticket);
                     timings(a);
                     printf("Enter name");
                    scanf("%s",&book[a].name);
                    printf("Enter phone no");
                    scanf("%d",&book[a].phone);
                    printf("Enter address");
                    scanf("%s",&address);
                    printf("Prefered seat A/M/W");
                    scanf("%s",&book[a].seatpos);
                }
                price=x*100000;
            }
            else if (date==3)
            {
                printf("\nAugust 12, 2017\n");
                strcpy(date1, "August 12, 2019");
                option6();
                printf("\nHow many tickets will you get?: ");
                scanf("%d", &x);
                for (a=0; a<x; a++)
                {
                    printf("\nPlease select which flight you will book: ");
                    scanf("%d", &book[a].ticket);
                     timings(a);
                    printf("Enter name");
                    scanf("%s",&book[a].name);
                    printf("Enter phone no");
                    scanf("%d",&book[a].phone);
                    printf("Enter address");
                    scanf("%s",&address);
                    printf("Prefered seat A/M/W");
                    scanf("%s",&book[a].seatpos);
                }
                price=x*100000;
            }
            else printf("\nInvalid");
            break;
                break;
            }
            default:
             break;
        }
        printf("\n");
    printf("\nSummary: ");
    for (a=0; a<x; a++)
    {
    printf("\nDetails of Ticket no. [%d]", a);
    printf("\nFlight no. [%d]\n", book[a].ticket);
    }
 
    printf("\nTotal number of tickets: %d\n", x);
    printf("\nTotal Price: %d", price);

     
   
    printf("\nIf you want to see summary of ticket you need to login again and for that press 1");
    scanf("%d",&opt);
    if(opt==1)
    {goto a;
	}
	 return 0;
}


if(options==2)
{  
	a:
	printf("\nEnter your username: ");
    scanf("%s", &user1);
    printf("\nEnter password: ");
    scanf("%s", &pw1);
    if(strcmpi(user,user1)==0 && strcmpi(pw,pw1)==0)
    {printf("Welcome \t%s",user);
	printf("\nHere are the details of the ticket you booked \n");
	if(strcmpi(user1,"sarah")==0 ){
	
	printf("\nTerminal: %s",terminal);
	printf("\nDate: %s",date1);
	printf("\nPrice: %d",price);
	printf("\nNo of tickets you booked: %d",x );
	
	printf("\nTIMINGS: %d hrs",tmz);
 	printf("\nTicket no: 101");
    printf("\nName: Sarah ");
    printf("\nPhone number: 9810166878"); 
	printf("\nSeat position: 23 A"); 
	

}
else

{printf("\nTerminal : %s",terminal);
printf("\nDate: %s",date1);
printf("\nPrice: %d",price);

printf("\nNo of tickets you booked: %d\n",x );
for(i=0;i<x;i++)
{if(seatno[i]==0)
seatno[i]++;
printf("\nTimings: %d hrs ",book[i].time);
printf("\nTicket no: %d",book[i].ticket);
printf("\nName: %s",book[i].name);
printf("\nPhone number: %d",book[i].phone);
printf("\nSeat no.  %d %s \n",seatno[i],book[i].seatpos);
if(book[i].ticket== 101)
printf("Delhi to Pune");
else if(book[i].ticket==102)
printf("Mumbai to Chennai");
else if(book[i].ticket==103)
printf("Bangalore to Kolkata");
else if(book[i].ticket==111)
printf("Delhi to Pune");
else if(book[i].ticket==112)
printf("Mumbai to Chennai");
else if(book[i].ticket==113)
printf("Bangalore to Kolkata");
else if(book[i].ticket==121)
printf("Delhi to Pune");
else if(book[i].ticket==122)
printf("Mumbai to Chennai");
else if(book[i].ticket==123)
printf("Bangalore to Kolkata");
else if(book[i].ticket==301)
printf("Delhi to Thailand");
else if(book[i].ticket==302)
printf("Mumbai to USA");
else if(book[i].ticket==303)
printf("Bangalore to Singapore");
else if(book[i].ticket==311)
printf("Delhi to Thailand");
else if(book[i].ticket==312)
printf("Mumbai to USA");
else if(book[i].ticket==313)
printf("Bangalore to Singapore");
else if(book[i].ticket==321)
printf("Delhi to Thailand");
else if(book[i].ticket==322)
printf("Mumbai to USA");
else if(book[i].ticket==323)
printf("Bangalore to Singapore");
printf("\n\n\n");
goto d;
}
}}
	
	else{
	
    printf("\nInvalid login \n You need to create an account first!\n PRESS 1 TO CREATE ACCOUNT AND 2 TO EXIT");
    scanf("%d",&select);
    if(select==1)
    { goto xy;
	}
    
    }   
}
if(options==3)
{

int n,j,new,ticket2,j1;
    printf("\nEnter username: ");
    scanf("%s", &admin1);
    
    printf("\nEnter password: ");
    scanf("%s", &pwa1);
    if(strcmpi(admin,admin1)==0 && strcmpi(pwa,pwa1)==0)
    {
	
    int ticket0[18] = {101, 102, 103, 111, 112, 113, 121, 122, 123, 301, 302, 303,311,312,313,321,322,323};
    int seat0[18]={16,5,24,18,24,65,46,16,85,16,5,24,16,5,24,16,5,24};
    int time0[18]={1300,1700,2000,1300,1700,2000,1300,1700,2000,1400,1800,2100,1400,1800,2100,1400,1800,2100};
    int price0[18]={5000,5000,5000,5000,5000,5000,5000,5000,5000,100000,100000,100000,100000,100000,100000,100000,100000,100000};
    g:
	printf("\nSelect options to change flight details");
    printf("\n1.Change flight number \n2.Change flight timings \n3.Change number of seats available \n4.Change price of ticket \n5.Change ongoing offers");
    scanf("%d",&n);
    printf("\nFlight                                       Price          Seating Capacity    Available Seats\n");
        	printf(" 101 Delhi to Pune(1300hrs)         	5000   		  100                     16\n");
   			printf(" 102 Mumbai To Chennai(1700hrs)     	5,000 		   75                      5\n");
    		printf(" 103 Bangalore To Kolkata(2000hrs)  	5,000 		  100                     24\n");
    		printf(" 111 Delhi to Pune(1300hrs)         	5000  		  100                  	  18\n");
    		printf(" 112 Mumbai To Chennai(1700hrs)     	5000   		   75                 	  24\n");
    		printf(" 113 Bangalore To Kolkata(2000hrs)  	5,000  		  100                	  65\n");
    		printf(" 121 Delhi to Pune(1300hrs)         	5,000  		  100                     46\n");
   			printf(" 122 Mumbai To Chennai(1700hrs)       	5000   		   75                	  16\n");
    		printf(" 123 Bangalore To Kolkata(2000hrs)  	5,000  		   100                    85\n");
    		printf(" 301 Delhi to Thailand(1400hrs)         100000        100                     16\n");
    		printf(" 302 Mumbai To USA (1800hrs)            100,000        75                      5\n");
   			printf(" 303 Bangalore To Singapore(2100hrs)    100,000       100                     24\n");
   			printf(" 311 Delhi to Thailand(1400hrs)       	100000   	  100                     16\n");
    		printf(" 312 Mumbai To USA(1800hrs)           	100,000        75                      5\n");
    		printf(" 313 Bangalore To Singapore(2100hrs)  	100,000       100                     24\n");
        	printf(" 321 Delhi to Thailand(1400hrs)         100000        100                     16\n");
    		printf(" 322 Mumbai To USA(1800hrs)           	100,000        75                      5\n");
    		printf(" 323 Bangalore To Singapore(2100hrs)  	100,000       100                     24\n");
    int count=0;
	switch(n)
    {
        case 1:
        {
        	
            printf("\nChoose flight to change flight number");
            scanf("%d",&ticket2);
            for(j=0;j<18;j++)
            {
            	if(ticket0[j]==ticket2)
            	{count++;
            		printf("\nEnter new flight no.");
            		scanf("%d",&new);
            		for(a=0;a<x;a++)
            		{
            		if(book[a].ticket==ticket2)
            		book[a].ticket=new;
            		ticket0[j]=new;
            	    j1=j;
					}
					
				}
				
				
			}
			
            
            
            break;
        }
        case 2:
        {
            printf("\nChoose flight to change flight timing");
            scanf("%d",&ticket2);
            for(j=0;j<18;j++)
            {
            	if(ticket0[j]==ticket2)
            	{count++;
            		printf("\nEnter new flight timings");
            		scanf("%d",&new);
            		for(a=0;a<x;a++)
            		{
            		if(book[a].ticket==ticket2)
            		time0[j]=new;
            		book[a].time=new;
            	    j1=j;
					}
					
				}
				
		    }
		   	
            break;
        }
        case 3:
        {
            printf("\nChoose flight to change number of seats available");
            scanf("%d",&ticket2);
            for(j=0;j<18;j++)
            {
            	if(ticket0[j]==ticket2)
            	{count++;
            		printf("\nEnter new available seats.");
            		scanf("%d",&new);
					seat0[j]=new;
					j1=j;
				    
				}
				
			}
			
            break;
        }
        case 4:
        {
            printf("\nChoose flight to change ticket price");
            scanf("%d",&ticket2);
            for(j=0;j<18;j++)
            {
            	if(ticket0[j]==ticket2)
            	{count++;
            		printf("\nEnter new flight price");
            		scanf("%d",&new);
            		price0[j]=new;
            		price=new*x;
            		j1=j;
            		
				}
				
			}
			
            break;
        }
        case 5:
        {
            printf("\nCurrent offer= nil");
            printf("\nChoose flight to add ticket offer to");
            scanf("%d",&ticket2);
            for(j=0;j<18;j++)
            {
            	if(ticket0[j]==ticket2)
            	{count++;
            		printf("\nEnter new offer/off in percentage");
            		scanf("%d",&new);
            		price=price-price*new/100;
            		j1=j;
            	
				}
			}
			
            break;
        }
 default:
        printf("\nPlease choose your option again from the following above");

    }
int d;
if(count==0)
printf("Incorrect flight no");
else
{

printf("\nTo view the changed details: PRESS 1");
scanf("%d",&d);
if(d==1)
{

printf("\nDetails of flight %d",ticket0[j1]);
printf("\nTimings of flight %d : %d",ticket0[j1],time0[j1]);
printf("\nNo. of seats: %d",seat0[j1]);
printf("\nPrice of seats:%d",price0[j1]);
printf("\nFrom and to: \t ");
if(ticket2== 101)
printf("Delhi to Pune");
else if(ticket2==102)
printf("Mumbai to Chennai");
else if(ticket2==103)
printf("Bangalore to Kolkata");
else if(ticket2==111)
printf("Delhi to Pune");
else if(ticket2==112)
printf("Mumbai to Chennai");
else if(ticket2==113)
printf("Bangalore to Kolkata");
else if(ticket2==121)
printf("Delhi to Pune");
else if(ticket2==122)
printf("Mumbai to Chennai");
else if(ticket2==123)
printf("Bangalore to Kolkata");
else if(ticket2==301)
printf("Delhi to Thailand");
else if(ticket2==302)
printf("Mumbai to USA");
else if(ticket2==303)
printf("Bangalore to Singapore");
else if(ticket2==311)
printf("Delhi to Thailand");
else if(ticket2==312)
printf("Mumbai to USA");
else if(ticket2==313)
printf("Bangalore to Singapore");
else if(ticket2==321)
printf("Delhi to Thailand");
else if(ticket2==322)
printf("Mumbai to USA");
else if(ticket2==323)
printf("Bangalore to Singapore");
printf("\nTo change details, press 1");
if(u==1 ) 
goto g;
}}}
else 
{printf("Incorrect data");
goto d;}
printf("\nTo go to login page, press 2");
scanf("%d",&u);
if(u==2)
goto d;

}
}


