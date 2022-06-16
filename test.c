#include <stdio.h>
#include <string.h>
 
struct candites {
   char  name[200];
   char  sumbol[200];
  
};

void printBook( struct candites *can );
int main( ) {

   struct candites can;        /* Declare Book1 of type Book */
   struct candites can2;        /* Declare Book2 of type Book */
 
   /* candite 1 specification */
   strcpy( can1.name, "ahmed zaboula");
   strcpy( can1.symbol, "#"); 
   

   /* candite 2 specification */
    strcpy( can2.name, "slah zaboula");
   strcpy( can2.symbol, "*"); 
   
 
   /* print Book1 info by passing address of Book1 */
   printBook( &can1 );

   /* print Book2 info by passing address of Book2 */
   printBook( &can2 );

   return 0;
}

void printBook( struct Books *book ) {

   printf( "Book title : %s\n", book->title);
   printf( "Book author : %s\n", book->author);
   printf( "Book subject : %s\n", book->subject);
   printf( "Book book_id : %d\n", book->book_id);
}


#define CANDIDATE_COUNT
#define CANDIDATE1 "ABC"
#define CANDIDATE2 "XYZ"
#define CANDIDATE3 "PQR"
int votescount1=0, votescount2=0, votescount3=0;


void castvote(){
   int choice;
   printf("\n\n ### Please choose your Candidate ####\n\n");
   printf("\n 1. %s", CANDIDATE1);
   printf("\n 2. %s", CANDIDATE2);
   printf("\n 3. %s", CANDIDATE3);
   printf("\n4. %s", "None of These");
   printf("\nInput your choice (1 - 4) : ");
   scanf("%d",&choice);
   switch(choice){
      case 1: votescount1++; break;
      case 2: votescount2++; break;
      case 3: votescount3++; break;
      default: printf("\n Error: Wrong Choice !! Please retry");
      //hold the screen
      getchar();
   }
   printf("\n thanks for vote !!");
}


void votesCount()
{
   printf("\n\n ##### Voting Statics ####");
   printf("\n %s - %d ", CANDIDATE1, votescount1);
   printf("\n %s - %d ", CANDIDATE2, votescount2);
   printf("\n %s - %d ", CANDIDATE3, votescount3);
}


void password()
{
    char name[20];
   int pass[20];
   int flag=10;

  
   while (flag !=0)
        {
          printf(" enter your name  \n");
                scanf("%s",name);
           printf("enter your pass \n ");
                scanf("%s",pass);
        if ((strcmp (name,"ahmed")==0)&&(strcmp(pass,"2022")==0))
                 {
                  printf(" successful  passing \n ");
                       flag =0;
                       break;
                 }
         else 
              {
               printf("wrong name or password...try again  \n");

             }
         }
}


void welcomeMessage()
{
    printf("\n\n\n\n\n");
    printf("\n\t\t\t  *------------------*\n");
    printf("\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\t\t\t        =                 WELCOME                   =");
    printf("\n\t\t\t        =                   TO                      =");
    printf("\n\t\t\t        =                ELECTRONIC                 =");
    printf("\n\t\t\t        =                  VOTING                   =");
    printf("\n\t\t\t        =                 MACHINE                   =");
    printf("\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\t\t\t  *------------------*\n");
    printf("\n\n\n\t\t\t Enter any key to continue.....");

}
}




int main()
{
  printf(" check your passing first \n");

   password();
   welcomeMessage();

   int i;
   int choice;
   do{
      printf("\n\n ###### Welcome to Election/Voting 2019 #####");
      printf("\n\n 1. Cast the Vote");
      printf("\n 2. Find Vote Count");
      printf("\n 0. Exit");
      printf("\n Please enter your choice : ");
      scanf("%d", &choice);
      switch(choice){
         case 1: castvote();break;
         case 2: votesCount();break;
         default: printf("\n Error: Invalid Choice");
      }
   }while(choice!=0);
   //hold the screen
   getchar();
   return 0;
}