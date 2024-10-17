/*Name: Arhaan A Mulla
UIN:241P049
Title:WAP to get students PCM marks from the user and find the average . Use conditional operator to print if the student is eligible for admission. Eligibility croteria is 50% in PCM
Experiment 2 , Task 2 ,
Roll No:46*/
#include<stdio.h>



int main()
{
    int phy,chem,maths;
    float average;

    printf("Enter phy marks");
    scanf("%d",&phy);
    printf("Enter chem marks");
    scanf("%d",&chem);
    printf("Enter maths marks");
    scanf("%d",&maths);

    average = (phy + chem + maths)/3.0;

    printf("Average : %f\n\n",average);
   (average>49) ?printf("eligible") : printf("not eligible");
return 0;


}

/*Output
Enter phy marks88
Enter chem marks78
Enter maths marks67
Average : 77.666664

eligible
Process finished
