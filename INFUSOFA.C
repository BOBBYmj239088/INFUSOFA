#include<stdio.h>
#include<conio.h>
void main()
{
int count,choice,sofa;
float cc,wgt,dose,ml;
/* cc=IV Rate(cc/Hr);  wgt=Body Weight(Kg);
   dose=Dose Available; ml=mL Available*/
float mghr,mchr;
/* mghr=Dose in Milligram per Hour*/
/*mchr=Dose(Answer) in Microgram per Hour*/
clrscr();
count=1;
while(count<=5)
{
printf("\n Choose the Adrenergic agent from the list below (Example:DOPAMINE): \n");
printf(" \n   1= DOPAMINE                 2=DOBUTAMINE     \n");
printf(" \n   3= EPINEPHRIN(ADRENALIN)    4=NOREPINEPHRINE(NORADRENALINE) \n");
scanf("%d",&choice);

	if(choice==1)
	{
	printf("\n The Agent you entered is DOPAMINE \n");
	}
	else if(choice==2)
	{
	printf("\n The Agent you entered is DOBUTAMINE \n");
	}
	else if(choice==3)
	{
	printf("\n The Agent you entered is EPINEPHRIN (ADRENALIN) \n");
	}
	else if(choice==4)
	{
	printf("\n The Agent you entered is NOREPINEPHRIN (NORADRENALIN) \n");
	}
	else
	{
	printf("\n The Name of the Agent is not clear \n");
	}
printf("\n Enter the IV Rate (cc/Hr)(Example: 53): \n");
scanf("%f",&cc);
printf("\n\n Enter the Body weight (Kg)(Example 70): \n");
scanf("%f",&wgt);
printf("\n\n Enter the Dose Available (Example 800): \n");
scanf("%f",&dose);
printf("\n\n Enter the mL Available (Example 500) : \n");
scanf("%f",&ml);
mghr=(cc/ml)*dose;
mchr=(mghr*1000)/(60*wgt);     /*(mghr/60)*(1000/wgt);*/
/*printf("The Infusion Rate as Milligram per Hour is %f \n",mghr);*/
printf("\n\n The Infusion Rate as Microgram per Hour is %f \n",mchr);
if(choice==1)
 {
       if(mchr<=5)
       {
       sofa=2;
       printf("\n\n The SOFA score for Cardiovascular system is %d \n",sofa);
       }
       else if(mchr>5)
       {
       sofa=3;
       printf("\n\n The SOFA score for Cardiovascular system is %d \n",sofa);
       }
       else if(mchr>15)
       {
       sofa=4;
       printf("\n\n The SOFA score for Cardiovascular system is %d \n",sofa);
       }
      else
       printf("\n\n Unable to calcular SOFA score \n");
 }
else if(choice==2)
      {
	sofa=2;
	printf("\n\n The SOFA score for Cardiovascular system is %d \n",sofa);
       }
else if(choice==3)
      {
	if(mchr<=0.1)
	  {
	    sofa=3;
	    printf("\n\n The SOFA score for Cardiovascular system is %d \n",sofa);
	  }
	else if(mchr>0.1)
	   {
	     sofa=4;
	     printf("\n\n The SOFA score for Cardiovascular system is %d \n",sofa);
	     }
	else
	    printf("\n\n Unable to calculate the score \n");
	}
else if(choice==4)
	   {
	   if(mchr<=0.1)
		{
		sofa=3;
		printf("\n\n The SOFA score for Cardiovascular system is %d \n",sofa);
		}
	   else if(mchr>0.1)
		{
		sofa=4;
		printf("\n\n The SOFA score for Cardiovascular system is %d \n",sofa);
		}
	   else
		printf("\n\n Unable to calculate the score\n");
	     }
else
printf("\n\n Unable to calculate the score\n");
getch();
count=count+1;
}
}