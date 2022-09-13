/* Ryan Reddoch
   CS-1714-B1
   Exercise 3 */

// CONSTANTS //
#define ERROR_TRAP_BUFFER 1024

#define MAX_YEAR 2022
#define MIN_YEAR 1475
#define AUTHOR_CHAR_LIMIT 32
#define BOOK_TITLE_LIMIT 128
#define CITY_AND_PUB_LIMIT 64

#define MAX_COUNTER 3

// HEADERS //
#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// buffer //
char buffer[ERROR_TRAP_BUFFER];

// global variables: //

 /* 

 FIRST NAME:
 LAST NAME:
 BOOK TITILE:
 EDITION:
 PUB COMPAMNY:
 PUB YEAR:
 PUB CITY:
 ISBN:

*/

// Author First Name //
 char authorFName0[AUTHOR_CHAR_LIMIT]; char authorFName1[AUTHOR_CHAR_LIMIT];
 char authorFName2[AUTHOR_CHAR_LIMIT]; char authorFName3[AUTHOR_CHAR_LIMIT];
 char authorFName4[AUTHOR_CHAR_LIMIT]; char authorFName5[AUTHOR_CHAR_LIMIT];
 char authorFName6[AUTHOR_CHAR_LIMIT]; char authorFName7[AUTHOR_CHAR_LIMIT];
  char authorFName8[AUTHOR_CHAR_LIMIT]; char authorFName9[AUTHOR_CHAR_LIMIT];

// Author Last Name //
char authorLName0[AUTHOR_CHAR_LIMIT]; char authorLName1[AUTHOR_CHAR_LIMIT];
char authorLName2[AUTHOR_CHAR_LIMIT]; char authorLName3[AUTHOR_CHAR_LIMIT]; 
char authorLName4[AUTHOR_CHAR_LIMIT]; char authorLName5[AUTHOR_CHAR_LIMIT];
char authorLName6[AUTHOR_CHAR_LIMIT]; char authorLName7[AUTHOR_CHAR_LIMIT]; 
char authorLName8[AUTHOR_CHAR_LIMIT]; char authorLName9[AUTHOR_CHAR_LIMIT];

//Book Title //
 char bookTitle0[BOOK_TITLE_LIMIT];char bookTitle1[BOOK_TITLE_LIMIT];
 char bookTitle2[BOOK_TITLE_LIMIT];char bookTitle3[BOOK_TITLE_LIMIT];
 char bookTitle4[BOOK_TITLE_LIMIT];char bookTitle5[BOOK_TITLE_LIMIT];
 char bookTitle6[BOOK_TITLE_LIMIT];char bookTitle7[BOOK_TITLE_LIMIT];
 char bookTitle8[BOOK_TITLE_LIMIT];char bookTitle9[BOOK_TITLE_LIMIT];

 // Book Edition //
 unsigned int bookEdition0; unsigned int bookEdition1;
 unsigned int bookEdition2; unsigned int bookEdition3; 
 unsigned int bookEdition4;unsigned int bookEdition5; 
 unsigned int bookEdition6; unsigned int bookEdition7;
 unsigned int bookEdition8; unsigned int bookEdition9;

// Publication Company //
 char pubCompany0[CITY_AND_PUB_LIMIT];char pubCompany1[CITY_AND_PUB_LIMIT];
 char pubCompany2[CITY_AND_PUB_LIMIT];char pubCompany3[CITY_AND_PUB_LIMIT];
 char pubCompany4[CITY_AND_PUB_LIMIT]; char pubCompany5[CITY_AND_PUB_LIMIT];
 char pubCompany6[CITY_AND_PUB_LIMIT];char pubCompany7[CITY_AND_PUB_LIMIT];
 char pubCompany8[CITY_AND_PUB_LIMIT];char pubCompany9[CITY_AND_PUB_LIMIT];

//Publicatiuon Year //
unsigned int pubYear0; unsigned int pubYear1; 
unsigned int pubYear2; unsigned int pubYear3; 
unsigned int pubYear4; unsigned int pubYear5;
unsigned int pubYear6; unsigned int pubYear7; 
unsigned int pubYear8; unsigned int pubYear9; 

// Publication City //
char pubCity0[CITY_AND_PUB_LIMIT]; char pubCity1[CITY_AND_PUB_LIMIT];
char pubCity2[CITY_AND_PUB_LIMIT];char pubCity3[CITY_AND_PUB_LIMIT];
char pubCity4[CITY_AND_PUB_LIMIT];char pubCity5[CITY_AND_PUB_LIMIT];
char pubCity6[CITY_AND_PUB_LIMIT];char pubCity7[CITY_AND_PUB_LIMIT];
char pubCity8[CITY_AND_PUB_LIMIT];char pubCity9[CITY_AND_PUB_LIMIT];

// ISBN-13 Number //
 unsigned long isbn0; unsigned long isbn1;
 unsigned long isbn2; unsigned long isbn3;
 unsigned long isbn4; unsigned long isbn5;
 unsigned long isbn6; unsigned long isbn7;
 unsigned long isbn8; unsigned long isbn9;

  /* 

 FIRST NAME:
 LAST NAME:
 BOOK TITILE:
 EDITION:
 PUB COMPAMNY:
 PUB YEAR:
 PUB CITY:
 ISBN:

*/


int main() {

  // initialize counter for switch statement //
  int counter = 0;
  // main boolean variable for do while loop //
  bool isGood;
  // boolean to end main do while
    bool goNoGo;

  // Main do while
  do {

    switch (counter) {

    case 0:
      
      /////////// AUTHOR FIRST NAME 0 /////////////////
      do {

        isGood = false;

        printf("What is the author's first name? \n");
        scanf(" %[^\n]s", buffer);

        if (strlen(buffer) >= AUTHOR_CHAR_LIMIT) {
          printf("Author name is limited to 32 characters, try again\n");
          isGood = true;
        }

      } while (isGood);

      strcpy(authorFName0, buffer);
      memset(buffer, '\0', ERROR_TRAP_BUFFER);

      ////////////// AUTHOR LAST NAME 0 ////////////////////////
       do {

        isGood = false;

        printf("What is the author's last name? \n");
        scanf(" %[^\n]s", buffer);

        if (strlen(buffer) >= AUTHOR_CHAR_LIMIT) {
          printf("Author name is limited to 32 characters, try again\n");
          isGood = true;
        }

      } while (isGood);

      strcpy(authorLName0, buffer);
      memset(buffer, '\0', ERROR_TRAP_BUFFER);

    /////////////  BOOK TITILE 0 ////////////////////////
     do {

        isGood = false;

        printf("What is the book's title? \n");
        scanf(" %[^\n]s", buffer);

        if (strlen(buffer) >= BOOK_TITLE_LIMIT) {
          printf("Book title is limited to 128 characters, try again\n");
          isGood = true;
        }

      } while (isGood);

      strcpy(bookTitle0, buffer);
      memset(buffer, '\0', ERROR_TRAP_BUFFER);

    /////////////// BOOK EDITION 0 ////////////////////////
 do {
        isGood = false;

        printf("What is the book's edition?\n Press enter to skip\n");
        scanf("%u", &bookEdition0);
        getchar();

// If they press enter, skip tio the next question
        

      } while (isGood);

    //////////////// PUBLICATION COMPANY 0 ////////////////
     do {

        isGood = false;

        printf("What is the publication company? \n");
        scanf(" %[^\n]s", buffer);

        if (strlen(buffer) >= CITY_AND_PUB_LIMIT) {
          printf("Publication company is limited to 64 characters, try again\n");
          isGood = true;
        }

      } while (isGood);

      strcpy(authorLName0, buffer);
      memset(buffer, '\0', ERROR_TRAP_BUFFER);


      ///////////// PUBLICATION YEAR 0 //////////////////////
      do {
        isGood = false;

        printf("What is the publication year?\n");
        scanf("%u", &pubYear1);
        getchar();

        if ((pubYear0 < MIN_YEAR) || (pubYear0 > MAX_YEAR)) {
          printf("Publication year must be between 1475 and 2022\n");
          isGood = true;
        }

      } while (isGood);

      /////////// PUBLICATION CITY 0 //////////////////////
      do {
        isGood = false;

        printf("What is the publication city?\n");
        scanf(" %[^\n]s", buffer);

        if (strlen(buffer) >= CITY_AND_PUB_LIMIT) {
          printf("City name must be less than 64 characters.\n");
          isGood = true;
        }

      } while (isGood);

      strcpy(pubCity0, buffer);
      memset(buffer, '\0', ERROR_TRAP_BUFFER);

    //////////////// ISBN 0 ////////////////////////
       do {
        isGood = false;

        printf("What is the ISBN-13 number?\n");
        scanf("%u", &isbn0);
        getchar();
          for(int i =0 ; i<=strlen(isbn0); i++)
        if ((pubYear0 < MIN_YEAR) || (pubYear0 > MAX_YEAR)) {
          printf("Publication year must be between 1475 and 2022\n");
          isGood = true;
        }

      } while (isGood);
      break;










      ///////////////////////////////////////////////////////////

    case 1:
    
        

        
      
g
       

    

      

     

    default:

      printf("Counter max overload!");
    }

    /////////////////// END SWITCH /////////////////////////

    goNoGo=true;
       counter++;
    if (counter < MAX_COUNTER) {
      
      printf("Would you like to comtinue?\n Y/N\n");
      scanf("%s", buffer);
      getchar();
      char ans = toupper(buffer[0]);
      if (ans != 'Y'){
        goNoGo=false;

        for (int i=0; i<counter; i++){
          
          switch(i){
            
            case 0:
  printf("Book 1:\n Author Name: %s\n Publication Year: %u \n Publication City: %s\n",authorLName1, pubYear1, pubCity1);
              break;
            
               case 1:
  printf("\n Book 2:\n Author Name: %s\n Publication Year: %u \n Publication City: %s",authorLName2, pubYear2, pubCity2);
              break;
            
               default:
         printf("No more!");
          }
        }
        }
    
     
  
      
    }

  } while ((counter < MAX_COUNTER) && (goNoGo==true));

    if (counter == MAX_COUNTER){
      printf("Book 1:\n Author Name:%s\n Publication Year %u\n Publication City %s \n",authorLName1,pubYear1,pubCity1);
      
            printf(" \nBook 2\n Author Name:%s\n Publication Year %u\n Publication City %s \n",authorLName2,pubYear2,pubCity2);

           printf("\nBook 3:\n Author Name:%s\n Publication Year %u\n Publication City %s \n",authorLName3,pubYear3,pubCity3);
    }

  
      

  return 0;
}
