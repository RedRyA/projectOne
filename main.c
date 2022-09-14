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

#define MAX_COUNTER 10

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

        printf("What is the book's edition? \nEnter 1 if NA\n");
        scanf("%u", &bookEdition0);
        getchar();

        

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

      strcpy(pubCompany0, buffer);
      memset(buffer, '\0', ERROR_TRAP_BUFFER);


      ///////////// PUBLICATION YEAR 0 //////////////////////
      do {
        isGood = false;

        printf("What is the publication year?\n");
        scanf("%u", &pubYear0);
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
        scanf("%lu", &isbn0);
        getchar();
        if ((isbn0 < 1000000000000) || (isbn0 > 9999999999999)) {
          printf("ISBN-13 must be 13 digits long\n");
          isGood = true;
        }

      } while (isGood);
      break;


      ///////////////////// CASE 1 //////////////////////////////

    case 1:
    
          
      /////////// AUTHOR FIRST NAME 1 /////////////////
      do {

        isGood = false;

        printf("What is the author's first name? \n");
        scanf(" %[^\n]s", buffer);

        if (strlen(buffer) >= AUTHOR_CHAR_LIMIT) {
          printf("Author name is limited to 32 characters, try again\n");
          isGood = true;
        }

      } while (isGood);

      strcpy(authorFName1, buffer);
      memset(buffer, '\0', ERROR_TRAP_BUFFER);

      ////////////// AUTHOR LAST NAME 1 ////////////////////////
       do {

        isGood = false;

        printf("What is the author's last name? \n");
        scanf(" %[^\n]s", buffer);

        if (strlen(buffer) >= AUTHOR_CHAR_LIMIT) {
          printf("Author name is limited to 32 characters, try again\n");
          isGood = true;
        }

      } while (isGood);

      strcpy(authorLName1, buffer);
      memset(buffer, '\0', ERROR_TRAP_BUFFER);

    /////////////  BOOK TITILE 1 ////////////////////////
     do {

        isGood = false;

        printf("What is the book's title? \n");
        scanf(" %[^\n]s", buffer);

        if (strlen(buffer) >= BOOK_TITLE_LIMIT) {
          printf("Book title is limited to 128 characters, try again\n");
          isGood = true;
        }

      } while (isGood);

      strcpy(bookTitle1, buffer);
      memset(buffer, '\0', ERROR_TRAP_BUFFER);

    /////////////// BOOK EDITION 1 ////////////////////////
 do {
        isGood = false;

        printf("What is the book's edition? \nEnter 1 if NA\n");
        scanf("%u", &bookEdition1);
        getchar();

        

      } while (isGood);

    //////////////// PUBLICATION COMPANY 1 ////////////////
     do {

        isGood = false;

        printf("What is the publication company? \n");
        scanf(" %[^\n]s", buffer);

        if (strlen(buffer) >= CITY_AND_PUB_LIMIT) {
          printf("Publication company is limited to 64 characters, try again\n");
          isGood = true;
        }

      } while (isGood);

      strcpy(pubCompany1, buffer);
      memset(buffer, '\0', ERROR_TRAP_BUFFER);


      ///////////// PUBLICATION YEAR 1 //////////////////////
      do {
        isGood = false;

        printf("What is the publication year?\n");
        scanf("%u", &pubYear1);
        getchar();

        if ((pubYear1 < MIN_YEAR) || (pubYear1 > MAX_YEAR)) {
          printf("Publication year must be between 1475 and 2022\n");
          isGood = true;
        }

      } while (isGood);

      /////////// PUBLICATION CITY 1 //////////////////////
      do {
        isGood = false;

        printf("What is the publication city?\n");
        scanf(" %[^\n]s", buffer);

        if (strlen(buffer) >= CITY_AND_PUB_LIMIT) {
          printf("City name must be less than 64 characters.\n");
          isGood = true;
        }

      } while (isGood);

      strcpy(pubCity1, buffer);
      memset(buffer, '\0', ERROR_TRAP_BUFFER);

    //////////////// ISBN 1 ////////////////////////
       do {
        isGood = false;

        printf("What is the ISBN-13 number?\n");
        scanf("%lu", &isbn1);
        getchar();
        if ((isbn1 < 1000000000000) || (isbn1 > 9999999999999)) {
          printf("ISBN-13 must be 13 digits long\n");
          isGood = true;
        }

      } while (isGood);
      break;

       ///////////////////// CASE 2 //////////////////////////////

    case 2:
    
          
      /////////// AUTHOR FIRST NAME 2 /////////////////
      do {

        isGood = false;

        printf("What is the author's first name? \n");
        scanf(" %[^\n]s", buffer);

        if (strlen(buffer) >= AUTHOR_CHAR_LIMIT) {
          printf("Author name is limited to 32 characters, try again\n");
          isGood = true;
        }

      } while (isGood);

      strcpy(authorFName2, buffer);
      memset(buffer, '\0', ERROR_TRAP_BUFFER);

      ////////////// AUTHOR LAST NAME 2 ////////////////////////
       do {

        isGood = false;

        printf("What is the author's last name? \n");
        scanf(" %[^\n]s", buffer);

        if (strlen(buffer) >= AUTHOR_CHAR_LIMIT) {
          printf("Author name is limited to 32 characters, try again\n");
          isGood = true;
        }

      } while (isGood);

      strcpy(authorLName2, buffer);
      memset(buffer, '\0', ERROR_TRAP_BUFFER);

    /////////////  BOOK TITILE 2 ////////////////////////
     do {

        isGood = false;

        printf("What is the book's title? \n");
        scanf(" %[^\n]s", buffer);

        if (strlen(buffer) >= BOOK_TITLE_LIMIT) {
          printf("Book title is limited to 128 characters, try again\n");
          isGood = true;
        }

      } while (isGood);

      strcpy(bookTitle2, buffer);
      memset(buffer, '\0', ERROR_TRAP_BUFFER);

    /////////////// BOOK EDITION 2 ////////////////////////
 do {
        isGood = false;

        printf("What is the book's edition?\n Enter 1 if NA\n");
        scanf("%u", &bookEdition2);
        getchar();

        

      } while (isGood);

    //////////////// PUBLICATION COMPANY 2 ////////////////
     do {

        isGood = false;

        printf("What is the publication company? \n");
        scanf(" %[^\n]s", buffer);

        if (strlen(buffer) >= CITY_AND_PUB_LIMIT) {
          printf("Publication company is limited to 64 characters, try again\n");
          isGood = true;
        }

      } while (isGood);

      strcpy(pubCompany2, buffer);
      memset(buffer, '\0', ERROR_TRAP_BUFFER);


      ///////////// PUBLICATION YEAR 2 //////////////////////
      do {
        isGood = false;

        printf("What is the publication year?\n");
        scanf("%u", &pubYear2);
        getchar();

        if ((pubYear2 < MIN_YEAR) || (pubYear2 > MAX_YEAR)) {
          printf("Publication year must be between 1475 and 2022\n");
          isGood = true;
        }

      } while (isGood);

      /////////// PUBLICATION CITY 2 //////////////////////
      do {
        isGood = false;

        printf("What is the publication city?\n");
        scanf(" %[^\n]s", buffer);

        if (strlen(buffer) >= CITY_AND_PUB_LIMIT) {
          printf("City name must be less than 64 characters.\n");
          isGood = true;
        }

      } while (isGood);

      strcpy(pubCity2, buffer);
      memset(buffer, '\0', ERROR_TRAP_BUFFER);

    //////////////// ISBN 2 ////////////////////////
       do {
        isGood = false;

        printf("What is the ISBN-13 number?\n");
        scanf("%lu", &isbn2);
        getchar();
        if ((isbn2 < 1000000000000) || (isbn2 > 9999999999999)) {
          printf("ISBN-13 must be 13 digits long\n");
          isGood = true;
        }

      } while (isGood);
      break;

       ///////////////////// CASE 3 //////////////////////////////

    case 3:
    
          
      /////////// AUTHOR FIRST NAME 3 /////////////////
      do {

        isGood = false;

        printf("What is the author's first name? \n");
        scanf(" %[^\n]s", buffer);

        if (strlen(buffer) >= AUTHOR_CHAR_LIMIT) {
          printf("Author name is limited to 32 characters, try again\n");
          isGood = true;
        }

      } while (isGood);

      strcpy(authorFName3, buffer);
      memset(buffer, '\0', ERROR_TRAP_BUFFER);

      ////////////// AUTHOR LAST NAME 3 ////////////////////////
       do {

        isGood = false;

        printf("What is the author's last name? \n");
        scanf(" %[^\n]s", buffer);

        if (strlen(buffer) >= AUTHOR_CHAR_LIMIT) {
          printf("Author name is limited to 32 characters, try again\n");
          isGood = true;
        }

      } while (isGood);

      strcpy(authorLName3, buffer);
      memset(buffer, '\0', ERROR_TRAP_BUFFER);

    /////////////  BOOK TITILE 3 ////////////////////////
     do {

        isGood = false;

        printf("What is the book's title? \n");
        scanf(" %[^\n]s", buffer);

        if (strlen(buffer) >= BOOK_TITLE_LIMIT) {
          printf("Book title is limited to 128 characters, try again\n");
          isGood = true;
        }

      } while (isGood);

      strcpy(bookTitle3, buffer);
      memset(buffer, '\0', ERROR_TRAP_BUFFER);

    /////////////// BOOK EDITION 3 ////////////////////////
 do {
        isGood = false;

        printf("What is the book's edition?\n Enter 1 if NA\n");
        scanf("%u", &bookEdition3);
        getchar();

        

      } while (isGood);

    //////////////// PUBLICATION COMPANY 3 ////////////////
     do {

        isGood = false;

        printf("What is the publication company? \n");
        scanf(" %[^\n]s", buffer);

        if (strlen(buffer) >= CITY_AND_PUB_LIMIT) {
          printf("Publication company is limited to 64 characters, try again\n");
          isGood = true;
        }

      } while (isGood);

      strcpy(pubCompany3, buffer);
      memset(buffer, '\0', ERROR_TRAP_BUFFER);


      ///////////// PUBLICATION YEAR 3 //////////////////////
      do {
        isGood = false;

        printf("What is the publication year?\n");
        scanf("%u", &pubYear3);
        getchar();

        if ((pubYear3 < MIN_YEAR) || (pubYear3 > MAX_YEAR)) {
          printf("Publication year must be between 1475 and 2022\n");
          isGood = true;
        }

      } while (isGood);

      /////////// PUBLICATION CITY 3 //////////////////////
      do {
        isGood = false;

        printf("What is the publication city?\n");
        scanf(" %[^\n]s", buffer);

        if (strlen(buffer) >= CITY_AND_PUB_LIMIT) {
          printf("City name must be less than 64 characters.\n");
          isGood = true;
        }

      } while (isGood);

      strcpy(pubCity3, buffer);
      memset(buffer, '\0', ERROR_TRAP_BUFFER);

    //////////////// ISBN 3 ////////////////////////
       do {
        isGood = false;

        printf("What is the ISBN-13 number?\n");
        scanf("%lu", &isbn3);
        getchar();
        if ((isbn3 < 1000000000000) || (isbn3 > 9999999999999)) {
          printf("ISBN-13 must be 13 digits long\n");
          isGood = true;
        }

      } while (isGood);
      break;

    ///////////////////// CASE 4 //////////////////////////////

    case 4:
    
          
      /////////// AUTHOR FIRST NAME 4 /////////////////
      do {

        isGood = false;

        printf("What is the author's first name? \n");
        scanf(" %[^\n]s", buffer);

        if (strlen(buffer) >= AUTHOR_CHAR_LIMIT) {
          printf("Author name is limited to 32 characters, try again\n");
          isGood = true;
        }

      } while (isGood);

      strcpy(authorFName4, buffer);
      memset(buffer, '\0', ERROR_TRAP_BUFFER);

      ////////////// AUTHOR LAST NAME 4 ////////////////////////
       do {

        isGood = false;

        printf("What is the author's last name? \n");
        scanf(" %[^\n]s", buffer);

        if (strlen(buffer) >= AUTHOR_CHAR_LIMIT) {
          printf("Author name is limited to 32 characters, try again\n");
          isGood = true;
        }

      } while (isGood);

      strcpy(authorLName4, buffer);
      memset(buffer, '\0', ERROR_TRAP_BUFFER);

    /////////////  BOOK TITILE 4 ////////////////////////
     do {

        isGood = false;

        printf("What is the book's title? \n");
        scanf(" %[^\n]s", buffer);

        if (strlen(buffer) >= BOOK_TITLE_LIMIT) {
          printf("Book title is limited to 128 characters, try again\n");
          isGood = true;
        }

      } while (isGood);

      strcpy(bookTitle4, buffer);
      memset(buffer, '\0', ERROR_TRAP_BUFFER);

    /////////////// BOOK EDITION 4 ////////////////////////
 do {
        isGood = false;

        printf("What is the book's edition?\n Enter 1 if NA\n");
        scanf("%u", &bookEdition4);
        getchar();

        

      } while (isGood);

    //////////////// PUBLICATION COMPANY 4 ////////////////
     do {

        isGood = false;

        printf("What is the publication company? \n");
        scanf(" %[^\n]s", buffer);

        if (strlen(buffer) >= CITY_AND_PUB_LIMIT) {
          printf("Publication company is limited to 64 characters, try again\n");
          isGood = true;
        }

      } while (isGood);

      strcpy(pubCompany4, buffer);
      memset(buffer, '\0', ERROR_TRAP_BUFFER);


      ///////////// PUBLICATION YEAR 4 //////////////////////
      do {
        isGood = false;

        printf("What is the publication year?\n");
        scanf("%u", &pubYear4);
        getchar();

        if ((pubYear4 < MIN_YEAR) || (pubYear4 > MAX_YEAR)) {
          printf("Publication year must be between 1475 and 2022\n");
          isGood = true;
        }

      } while (isGood);

      /////////// PUBLICATION CITY 4 //////////////////////
      do {
        isGood = false;

        printf("What is the publication city?\n");
        scanf(" %[^\n]s", buffer);

        if (strlen(buffer) >= CITY_AND_PUB_LIMIT) {
          printf("City name must be less than 64 characters.\n");
          isGood = true;
        }

      } while (isGood);

      strcpy(pubCity4, buffer);
      memset(buffer, '\0', ERROR_TRAP_BUFFER);

    //////////////// ISBN 4 ////////////////////////
       do {
        isGood = false;

        printf("What is the ISBN-13 number?\n");
        scanf("%lu", &isbn4);
        getchar();
        if ((isbn4 < 1000000000000) || (isbn4 > 9999999999999)) {
          printf("ISBN-13 must be 13 digits long\n");
          isGood = true;
        }

      } while (isGood);
      break;

          case 5:
    
          
      /////////// AUTHOR FIRST NAME 5 /////////////////
      do {

        isGood = false;

        printf("What is the author's first name? \n");
        scanf(" %[^\n]s", buffer);

        if (strlen(buffer) >= AUTHOR_CHAR_LIMIT) {
          printf("Author name is limited to 32 characters, try again\n");
          isGood = true;
        }

      } while (isGood);

      strcpy(authorFName5, buffer);
      memset(buffer, '\0', ERROR_TRAP_BUFFER);

      ////////////// AUTHOR LAST NAME 5 ////////////////////////
       do {

        isGood = false;

        printf("What is the author's last name? \n");
        scanf(" %[^\n]s", buffer);

        if (strlen(buffer) >= AUTHOR_CHAR_LIMIT) {
          printf("Author name is limited to 32 characters, try again\n");
          isGood = true;
        }

      } while (isGood);

      strcpy(authorLName5, buffer);
      memset(buffer, '\0', ERROR_TRAP_BUFFER);

    /////////////  BOOK TITILE 5 ////////////////////////
     do {

        isGood = false;

        printf("What is the book's title? \n");
        scanf(" %[^\n]s", buffer);

        if (strlen(buffer) >= BOOK_TITLE_LIMIT) {
          printf("Book title is limited to 128 characters, try again\n");
          isGood = true;
        }

      } while (isGood);

      strcpy(bookTitle5, buffer);
      memset(buffer, '\0', ERROR_TRAP_BUFFER);

    /////////////// BOOK EDITION 5 ////////////////////////
 do {
        isGood = false;

        printf("What is the book's edition?\n Enter 1 if NA\n");
        scanf("%u", &bookEdition5);
        getchar();

        

      } while (isGood);

    //////////////// PUBLICATION COMPANY 5 ////////////////
     do {

        isGood = false;

        printf("What is the publication company? \n");
        scanf(" %[^\n]s", buffer);

        if (strlen(buffer) >= CITY_AND_PUB_LIMIT) {
          printf("Publication company is limited to 64 characters, try again\n");
          isGood = true;
        }

      } while (isGood);

      strcpy(pubCompany5, buffer);
      memset(buffer, '\0', ERROR_TRAP_BUFFER);


      ///////////// PUBLICATION YEAR 5 //////////////////////
      do {
        isGood = false;

        printf("What is the publication year?\n");
        scanf("%u", &pubYear5);
        getchar();

        if ((pubYear5 < MIN_YEAR) || (pubYear5 > MAX_YEAR)) {
          printf("Publication year must be between 1475 and 2022\n");
          isGood = true;
        }

      } while (isGood);

      /////////// PUBLICATION CITY 5 //////////////////////
      do {
        isGood = false;

        printf("What is the publication city?\n");
        scanf(" %[^\n]s", buffer);

        if (strlen(buffer) >= CITY_AND_PUB_LIMIT) {
          printf("City name must be less than 64 characters.\n");
          isGood = true;
        }

      } while (isGood);

      strcpy(pubCity5, buffer);
      memset(buffer, '\0', ERROR_TRAP_BUFFER);

    //////////////// ISBN 5 ////////////////////////
       do {
        isGood = false;

        printf("What is the ISBN-13 number?\n");
        scanf("%lu", &isbn5);
        getchar();
        if ((isbn5 < 1000000000000) || (isbn5 > 9999999999999)) {
          printf("ISBN-13 must be 13 digits long\n");
          isGood = true;
        }

      } while (isGood);
      break;
         
         ///////////////// CASE 6 /////////////////////
        case 6:
    
          
      /////////// AUTHOR FIRST NAME 6 /////////////////
      do {

        isGood = false;

        printf("What is the author's first name? \n");
        scanf(" %[^\n]s", buffer);

        if (strlen(buffer) >= AUTHOR_CHAR_LIMIT) {
          printf("Author name is limited to 32 characters, try again\n");
          isGood = true;
        }

      } while (isGood);

      strcpy(authorFName6, buffer);
      memset(buffer, '\0', ERROR_TRAP_BUFFER);

      ////////////// AUTHOR LAST NAME 6 ////////////////////////
       do {

        isGood = false;

        printf("What is the author's last name? \n");
        scanf(" %[^\n]s", buffer);

        if (strlen(buffer) >= AUTHOR_CHAR_LIMIT) {
          printf("Author name is limited to 32 characters, try again\n");
          isGood = true;
        }

      } while (isGood);

      strcpy(authorLName6, buffer);
      memset(buffer, '\0', ERROR_TRAP_BUFFER);

    /////////////  BOOK TITILE 6 ////////////////////////
     do {

        isGood = false;

        printf("What is the book's title? \n");
        scanf(" %[^\n]s", buffer);

        if (strlen(buffer) >= BOOK_TITLE_LIMIT) {
          printf("Book title is limited to 128 characters, try again\n");
          isGood = true;
        }

      } while (isGood);

      strcpy(bookTitle6, buffer);
      memset(buffer, '\0', ERROR_TRAP_BUFFER);

    /////////////// BOOK EDITION 6 ////////////////////////
 do {
        isGood = false;

        printf("What is the book's edition?\nEnter 1 if NA\n");
        scanf("%u", &bookEdition6);
        getchar();

        

      } while (isGood);

    //////////////// PUBLICATION COMPANY 6 ////////////////
     do {

        isGood = false;

        printf("What is the publication company? \n");
        scanf(" %[^\n]s", buffer);

        if (strlen(buffer) >= CITY_AND_PUB_LIMIT) {
          printf("Publication company is limited to 64 characters, try again\n");
          isGood = true;
        }

      } while (isGood);

      strcpy(pubCompany6, buffer);
      memset(buffer, '\0', ERROR_TRAP_BUFFER);


      ///////////// PUBLICATION YEAR 6 //////////////////////
      do {
        isGood = false;

        printf("What is the publication year?\n");
        scanf("%u", &pubYear6);
        getchar();

        if ((pubYear6 < MIN_YEAR) || (pubYear6 > MAX_YEAR)) {
          printf("Publication year must be between 1475 and 2022\n");
          isGood = true;
        }

      } while (isGood);

      /////////// PUBLICATION CITY 6 //////////////////////
      do {
        isGood = false;

        printf("What is the publication city?\n");
        scanf(" %[^\n]s", buffer);

        if (strlen(buffer) >= CITY_AND_PUB_LIMIT) {
          printf("City name must be less than 64 characters.\n");
          isGood = true;
        }

      } while (isGood);

      strcpy(pubCity6, buffer);
      memset(buffer, '\0', ERROR_TRAP_BUFFER);

    //////////////// ISBN 6 ////////////////////////
       do {
        isGood = false;

        printf("What is the ISBN-13 number?\n");
        scanf("%lu", &isbn6);
        getchar();
        if ((isbn6 < 1000000000000) || (isbn6 > 9999999999999)) {
          printf("ISBN-13 must be 13 digits long\n");
          isGood = true;
        }

      } while (isGood);
      break;

         ///////////////// CASE 7 /////////////////////
        case 7:
    
          
      /////////// AUTHOR FIRST NAME 7 /////////////////
      do {

        isGood = false;

        printf("What is the author's first name? \n");
        scanf(" %[^\n]s", buffer);

        if (strlen(buffer) >= AUTHOR_CHAR_LIMIT) {
          printf("Author name is limited to 32 characters, try again\n");
          isGood = true;
        }

      } while (isGood);

      strcpy(authorFName7, buffer);
      memset(buffer, '\0', ERROR_TRAP_BUFFER);

      ////////////// AUTHOR LAST NAME 7 ////////////////////////
       do {

        isGood = false;

        printf("What is the author's last name? \n");
        scanf(" %[^\n]s", buffer);

        if (strlen(buffer) >= AUTHOR_CHAR_LIMIT) {
          printf("Author name is limited to 32 characters, try again\n");
          isGood = true;
        }

      } while (isGood);

      strcpy(authorLName7, buffer);
      memset(buffer, '\0', ERROR_TRAP_BUFFER);

    /////////////  BOOK TITILE 7 ////////////////////////
     do {

        isGood = false;

        printf("What is the book's title? \n");
        scanf(" %[^\n]s", buffer);

        if (strlen(buffer) >= BOOK_TITLE_LIMIT) {
          printf("Book title is limited to 128 characters, try again\n");
          isGood = true;
        }

      } while (isGood);

      strcpy(bookTitle7, buffer);
      memset(buffer, '\0', ERROR_TRAP_BUFFER);

    /////////////// BOOK EDITION 7 ////////////////////////
 do {
        isGood = false;

        printf("What is the book's edition? \nEnter 1 if NA\n");
        scanf("%u", &bookEdition7);
        getchar();

        

      } while (isGood);

    //////////////// PUBLICATION COMPANY 7 ////////////////
     do {

        isGood = false;

        printf("What is the publication company? \n");
        scanf(" %[^\n]s", buffer);

        if (strlen(buffer) >= CITY_AND_PUB_LIMIT) {
          printf("Publication company is limited to 64 characters, try again\n");
          isGood = true;
        }

      } while (isGood);

      strcpy(pubCompany7, buffer);
      memset(buffer, '\0', ERROR_TRAP_BUFFER);


      ///////////// PUBLICATION YEAR 7 //////////////////////
      do {
        isGood = false;

        printf("What is the publication year?\n");
        scanf("%u", &pubYear7);
        getchar();

        if ((pubYear7 < MIN_YEAR) || (pubYear7 > MAX_YEAR)) {
          printf("Publication year must be between 1475 and 2022\n");
          isGood = true;
        }

      } while (isGood);

      /////////// PUBLICATION CITY 7 //////////////////////
      do {
        isGood = false;

        printf("What is the publication city?\n");
        scanf(" %[^\n]s", buffer);

        if (strlen(buffer) >= CITY_AND_PUB_LIMIT) {
          printf("City name must be less than 64 characters.\n");
          isGood = true;
        }

      } while (isGood);

      strcpy(pubCity7, buffer);
      memset(buffer, '\0', ERROR_TRAP_BUFFER);

    //////////////// ISBN 7 ////////////////////////
       do {
        isGood = false;

        printf("What is the ISBN-13 number?\n");
        scanf("%lu", &isbn7);
        getchar();
        if ((isbn7 < 1000000000000) || (isbn7 > 9999999999999)) {
          printf("ISBN-13 must be 13 digits long\n");
          isGood = true;
        }

      } while (isGood);
      break;

   ///////////////// CASE 8 /////////////////////
        case 8:
    
          
      /////////// AUTHOR FIRST NAME 8 /////////////////
      do {

        isGood = false;

        printf("What is the author's first name? \n");
        scanf(" %[^\n]s", buffer);

        if (strlen(buffer) >= AUTHOR_CHAR_LIMIT) {
          printf("Author name is limited to 32 characters, try again\n");
          isGood = true;
        }

      } while (isGood);

      strcpy(authorFName8, buffer);
      memset(buffer, '\0', ERROR_TRAP_BUFFER);

      ////////////// AUTHOR LAST NAME 8 ////////////////////////
       do {

        isGood = false;

        printf("What is the author's last name? \n");
        scanf(" %[^\n]s", buffer);

        if (strlen(buffer) >= AUTHOR_CHAR_LIMIT) {
          printf("Author name is limited to 32 characters, try again\n");
          isGood = true;
        }

      } while (isGood);

      strcpy(authorLName8, buffer);
      memset(buffer, '\0', ERROR_TRAP_BUFFER);

    /////////////  BOOK TITILE 8 ////////////////////////
     do {

        isGood = false;

        printf("What is the book's title? \n");
        scanf(" %[^\n]s", buffer);

        if (strlen(buffer) >= BOOK_TITLE_LIMIT) {
          printf("Book title is limited to 128 characters, try again\n");
          isGood = true;
        }

      } while (isGood);

      strcpy(bookTitle8, buffer);
      memset(buffer, '\0', ERROR_TRAP_BUFFER);

    /////////////// BOOK EDITION 8 ////////////////////////
 do {
        isGood = false;

        printf("What is the book's edition? \nEnter 1 if NA\n");
        scanf("%u", &bookEdition8);
        getchar();

        

      } while (isGood);

    //////////////// PUBLICATION COMPANY 8 ////////////////
     do {

        isGood = false;

        printf("What is the publication company? \n");
        scanf(" %[^\n]s", buffer);

        if (strlen(buffer) >= CITY_AND_PUB_LIMIT) {
          printf("Publication company is limited to 64 characters, try again\n");
          isGood = true;
        }

      } while (isGood);

      strcpy(pubCompany8, buffer);
      memset(buffer, '\0', ERROR_TRAP_BUFFER);


      ///////////// PUBLICATION YEAR 8 //////////////////////
      do {
        isGood = false;

        printf("What is the publication year?\n");
        scanf("%u", &pubYear8);
        getchar();

        if ((pubYear8 < MIN_YEAR) || (pubYear8 > MAX_YEAR)) {
          printf("Publication year must be between 1475 and 2022\n");
          isGood = true;
        }

      } while (isGood);

      /////////// PUBLICATION CITY 8 //////////////////////
      do {
        isGood = false;

        printf("What is the publication city?\n");
        scanf(" %[^\n]s", buffer);

        if (strlen(buffer) >= CITY_AND_PUB_LIMIT) {
          printf("City name must be less than 64 characters.\n");
          isGood = true;
        }

      } while (isGood);

      strcpy(pubCity8, buffer);
      memset(buffer, '\0', ERROR_TRAP_BUFFER);

    //////////////// ISBN 8 ////////////////////////
       do {
        isGood = false;

        printf("What is the ISBN-13 number?\n");
        scanf("%lu", &isbn8);
        getchar();
        if ((isbn8 < 1000000000000) || (isbn8 > 9999999999999)) {
          printf("ISBN-13 must be 13 digits long\n");
          isGood = true;
        }

      } while (isGood);
      break;

   ///////////////// CASE 9 /////////////////////
        case 9:
    
          
      /////////// AUTHOR FIRST NAME 9 /////////////////
      do {

        isGood = false;

        printf("What is the author's first name? \n");
        scanf(" %[^\n]s", buffer);

        if (strlen(buffer) >= AUTHOR_CHAR_LIMIT) {
          printf("Author name is limited to 32 characters, try again\n");
          isGood = true;
        }

      } while (isGood);

      strcpy(authorFName9, buffer);
      memset(buffer, '\0', ERROR_TRAP_BUFFER);

      ////////////// AUTHOR LAST NAME 9 ////////////////////////
       do {

        isGood = false;

        printf("What is the author's last name? \n");
        scanf(" %[^\n]s", buffer);

        if (strlen(buffer) >= AUTHOR_CHAR_LIMIT) {
          printf("Author name is limited to 32 characters, try again\n");
          isGood = true;
        }

      } while (isGood);

      strcpy(authorLName9, buffer);
      memset(buffer, '\0', ERROR_TRAP_BUFFER);

    /////////////  BOOK TITILE 9 ////////////////////////
     do {

        isGood = false;

        printf("What is the book's title? \n");
        scanf(" %[^\n]s", buffer);

        if (strlen(buffer) >= BOOK_TITLE_LIMIT) {
          printf("Book title is limited to 128 characters, try again\n");
          isGood = true;
        }

      } while (isGood);

      strcpy(bookTitle9, buffer);
      memset(buffer, '\0', ERROR_TRAP_BUFFER);

    /////////////// BOOK EDITION 9 ////////////////////////
 do {
        isGood = false;

        printf("What is the book's edition? \nEnter 1 if NA\n");
        scanf("%u", &bookEdition9);
        getchar();

        

      } while (isGood);

    //////////////// PUBLICATION COMPANY 9 ////////////////
     do {

        isGood = false;

        printf("What is the publication company? \n");
        scanf(" %[^\n]s", buffer);

        if (strlen(buffer) >= CITY_AND_PUB_LIMIT) {
          printf("Publication company is limited to 64 characters, try again\n");
          isGood = true;
        }

      } while (isGood);

      strcpy(pubCompany9, buffer);
      memset(buffer, '\0', ERROR_TRAP_BUFFER);


      ///////////// PUBLICATION YEAR 9 //////////////////////
      do {
        isGood = false;

        printf("What is the publication year?\n");
        scanf("%u", &pubYear9);
        getchar();

        if ((pubYear9 < MIN_YEAR) || (pubYear9 > MAX_YEAR)) {
          printf("Publication year must be between 1475 and 2022\n");
          isGood = true;
        }

      } while (isGood);

      /////////// PUBLICATION CITY 9 //////////////////////
      do {
        isGood = false;

        printf("What is the publication city?\n");
        scanf(" %[^\n]s", buffer);

        if (strlen(buffer) >= CITY_AND_PUB_LIMIT) {
          printf("City name must be less than 64 characters.\n");
          isGood = true;
        }

      } while (isGood);

      strcpy(pubCity9, buffer);
      memset(buffer, '\0', ERROR_TRAP_BUFFER);

    //////////////// ISBN 9 ////////////////////////
       do {
        isGood = false;

        printf("What is the ISBN-13 number?\n");
        scanf("%lu", &isbn9);
        getchar();
        
        if ((isbn9 < 1000000000000) || (isbn9 > 9999999999999)) {
          printf("ISBN-13 must be 13 digits long\n");
          isGood = true;
        }

      } while (isGood);
      break;
       

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
  printf("Book 1:\n Author Name: %s %s\n Book Title: %s \n Edition: %d \n Publication Company: %s \n Publication Year: %u \n Publication City: %s\n ISBN: %lu \n",authorFName0, authorLName0,bookTitle0,bookEdition0,pubCompany0, pubYear0, pubCity0, isbn0);
              break;
            
               case 1:
  printf("\nBook 2:\n Author Name: %s %s\n Book Title: %s \n Edition: %d \n Publication Company: %s \n Publication Year: %u \n Publication City: %s\n ISBN: %lu\n",authorFName1, authorLName1,bookTitle1,bookEdition1,pubCompany1, pubYear1, pubCity1, isbn1);
              break;

             case 2:
  printf("\nBook 2:\n Author Name: %s %s\n Book Title: %s \n Edition: %d \n Publication Company: %s \n Publication Year: %u \n Publication City: %s\n ISBN: %lu\n",authorFName2, authorLName2,bookTitle2,bookEdition2,pubCompany2, pubYear2, pubCity2, isbn2);
            break;

            case 3:
  printf("\nBook 3:\n Author Name: %s %s\n Book Title: %s \n Edition: %d \n Publication Company: %s \n Publication Year: %u \n Publication City: %s\n ISBN: %lu\n",authorFName3, authorLName3,bookTitle3,bookEdition3,pubCompany3, pubYear3, pubCity3, isbn3);
            break;
            
            case 4:
  printf("\nBook 4:\n Author Name: %s %s\n Book Title: %s \n Edition: %d \n Publication Company: %s \n Publication Year: %u \n Publication City: %s\n ISBN: %lu\n",authorFName4, authorLName4,bookTitle4,bookEdition4,pubCompany4, pubYear4, pubCity4, isbn4);
            break;

            case 5:
  printf("\nBook 5:\n Author Name: %s %s\n Book Title: %s \n Edition: %d \n Publication Company: %s \n Publication Year: %u \n Publication City: %s\n ISBN: %lu\n",authorFName5, authorLName5,bookTitle5,bookEdition5,pubCompany5, pubYear5, pubCity5, isbn5);
            break;

          case 6:
  printf("\nBook 6:\n Author Name: %s %s\n Book Title: %s \n Edition: %d \n Publication Company: %s \n Publication Year: %u \n Publication City: %s\n ISBN: %lu\n",authorFName6, authorLName6,bookTitle6,bookEdition6,pubCompany6, pubYear6, pubCity6, isbn6);
            break;

                case 7:
  printf("\nBook 7:\n Author Name: %s %s\n Book Title: %s \n Edition: %d \n Publication Company: %s \n Publication Year: %u \n Publication City: %s\n ISBN: %lu\n",authorFName7, authorLName7,bookTitle7,bookEdition7,pubCompany7, pubYear7, pubCity7, isbn7);
            break;

            case 8:
  printf("\nBook 8:\n Author Name: %s %s\n Book Title: %s \n Edition: %d \n Publication Company: %s \n Publication Year: %u \n Publication City: %s\n ISBN: %lu\n",authorFName8, authorLName8,bookTitle8,bookEdition8,pubCompany8, pubYear8, pubCity8, isbn8);
            break;

        case 9:
  printf("Book 9:\n Author Name: %s %s\n Book Title: %s \n Edition: %d \n Publication Company: %s \n Publication Year: %u \n Publication City: %s\n ISBN: %lu\n",authorFName9, authorLName9,bookTitle9,bookEdition9,pubCompany9, pubYear9, pubCity9, isbn9);

            break;



               default:
         printf("No more!");
          }
        }
        }
    
     
      
    }

  } while ((counter < MAX_COUNTER) && (goNoGo==true));

    if (counter == MAX_COUNTER){

     printf("Book 1:\n Author Name: %s %s\n Book Title: %s \n Edition: %d \n Publication Company: %s \n Publication Year: %u \n Publication City: %s\n ISBN: %lu \n",authorFName0, authorLName0,bookTitle0,bookEdition0,pubCompany0, pubYear0, pubCity0, isbn0);

    printf("\nBook 2:\n Author Name: %s %s\n Book Title: %s \n Edition: %d \n Publication Company: %s \n Publication Year: %u \n Publication City: %s\n ISBN: %lu \n",authorFName1, authorLName1,bookTitle1,bookEdition1,pubCompany1, pubYear1, pubCity1, isbn1);

     printf("\nBook 3:\n Author Name: %s %s\n Book Title: %s \n Edition: %d \n Publication Company: %s \n Publication Year: %u \n Publication City: %s\n ISBN: %lu \n",authorFName2, authorLName2,bookTitle2,bookEdition2,pubCompany2, pubYear2, pubCity2, isbn2);

     printf("\nBook 4:\n Author Name: %s %s\n Book Title: %s \n Edition: %d \n Publication Company: %s \n Publication Year: %u \n Publication City: %s\n ISBN: %lu \n",authorFName3, authorLName3,bookTitle3,bookEdition3,pubCompany3, pubYear3, pubCity3, isbn3);

     printf("\nBook 5:\n Author Name: %s %s\n Book Title: %s \n Edition: %d \n Publication Company: %s \n Publication Year: %u \n Publication City: %s\n ISBN: %lu \n",authorFName4, authorLName4,bookTitle4,bookEdition4,pubCompany4, pubYear4, pubCity4, isbn4);

    printf ("\nBook 6:\n Author Name: %s %s\n Book Title: %s \n Edition: %d \n Publication Company: %s \n Publication Year: %u \n Publication City: %s\n ISBN: %lu \n",authorFName5, authorLName5,bookTitle5,bookEdition5,pubCompany5, pubYear5, pubCity5, isbn5);

    printf ("\nBook 7:\n Author Name: %s %s\n Book Title: %s \n Edition: %d \n Publication Company: %s \n Publication Year: %u \n Publication City: %s\n ISBN: %lu \n",authorFName6, authorLName6,bookTitle6,bookEdition6,pubCompany6, pubYear6, pubCity6, isbn6);

    printf ("\nBook 8:\n Author Name: %s %s\n Book Title: %s \n Edition: %d \n Publication Company: %s \n Publication Year: %u \n Publication City: %s\n ISBN: %lu \n",authorFName7, authorLName7,bookTitle7,bookEdition7,pubCompany7, pubYear7, pubCity7, isbn7);

    printf ("\nBook 9:\n Author Name: %s %s\n Book Title: %s \n Edition: %d \n Publication Company: %s \n Publication Year: %u \n Publication City: %s\n ISBN: %lu \n",authorFName8, authorLName8,bookTitle8,bookEdition8,pubCompany8, pubYear8, pubCity8, isbn8);

    printf ("\nBook 10:\n Author Name: %s %s\n Book Title: %s \n Edition: %d \n Publication Company: %s \n Publication Year: %u \n Publication City: %s\n ISBN: %lu \n",authorFName9, authorLName9,bookTitle9,bookEdition9,pubCompany9, pubYear9, pubCity9, isbn9);
    }

  
      

  return 0;
}
