#include<stdio.h>
int main()
{

void car_return()
 {
     //FILE fptr,nptr;
     char id[13];
     int dd,mm,yy,d,m,y,flag=0,i,j;
     printf("Welcome back dear customer \n");
     printf("Please enter your id\n");
     scanf("%s",id);
     //fptr=fopen("Car_rent","r");
     //fread(cr,sizeof(struct car),1,fptr);
     for(i=0;i<10;i++)   
	   {
	            if(strcmp(cr[i].customerId,id)==0)      
	    {             flag=1;          
		printf("HELLO %s\n",cr[i].customername);     
		printf("For confirmation please enter the date on which you took the car and the date on which you are returning the date in(dd mm yyyy)format.\n");    
		scanf("%d%d%d",&dd,&mm,&yy);           
		scanf("%d%d%d",&d,&m,&y);            
		cr[i].days=date(yy,y,mm,m,dd,d);            
		if(cr[i].days>cr[i].n)
             {
                     cr[i].rent+=50*(cr[i].days-cr[i].n);
             }
             printf("FINAL AMOUNT:%d \n",cr[i].rent);
             printf("\n\n");
             break;
         }
     }
     if(flag==0)
            {
              printf("Customer not found\n");
             //fclose(fptr);
            }
         else
         {
             //nptr=fopen("Car_rent","w+");
             //fread(cr,sizeof(cr),1,nptr);
             for(j=0;j<10;j++)
             {
                 if(j==i)
                     memset(&cr[j].carrented[0],0,sizeof(cr[j].carrented[0]));
             }
             //fclose(fptr);
             //remove("Car_rent");
             //rename("Car_temp","Car_rent");
            // fclose(nptr);
         }
 }
}
