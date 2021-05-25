#include<stdio.h>
#include<time.h>        //is used for Time

/////////////////////////////////////////////////////////////////////////////////////////////
// Name Of Program:- To Display Current Time And Date In C Programming.                    //
// Name:- Rushikesh Narkhede                                                               //
// Date :- 25 May 2021 Time 4:18pm                                                         //
// Descrimption :- This Program Is Show Current System Date and Time.                      //
//                      This Program Create Study Purpose.                                 //
/////////////////////////////////////////////////////////////////////////////////////////////
void DateAndTime()
{
     printf("Jay Ganesh\n");
     printf("\n\n\t\tQuiz Game - Best Quiz Game To learn\n\n\n");
    time_t t;   //time_t is a DataType but not a primitive Data Type
    time(&t);
    printf("\nThis Program Has been writeen at (Quiz Satrting date and Time): %s",ctime(&t));   // ctime is a Function
    printf("\n\n\t\t\tCodding is Fun !\n\n\n");

}
int main()
{
    
    DateAndTime();

    return 0;
}