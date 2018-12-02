/*----------------------------------------------------------
 *				HTBLA-Leonding / Klasse: <your class>
 * ---------------------------------------------------------
 * Exercise Number: 0
 * Title:			trim.cpp
 * Author:			P. Bauer
 * Due Date:		March 14, 2015
 * ----------------------------------------------------------
 * Description:
 * Test functions for trim.h
 * ----------------------------------------------------------
 */
#include "trim.h"
#include <string.h>

void trim(char* source_string, char* trimmed_string)
{
  char testChar[STRLEN];
  remove_leading_blanks(source_string,testChar);
  remove_trailing_blanks(testChar);
  strcpy(trimmed_string,testChar);
}

void remove_leading_blanks(char* source_string, char testChar[])
{

  bool textHasStarted=false;
  int count=0;
  for(int i=0;i<(int)strlen(source_string);i++)
  {
    if(textHasStarted==true)
    {
      testChar[count]=source_string[i];
      count++;
    }

    if(source_string[i]!=' ' && textHasStarted==false)
    {
      testChar[0]=source_string[i];
      textHasStarted=true;
      count++;
    }

  }
  testChar[count]='\0';

}

void remove_trailing_blanks(char testChar[])
{
  bool textHasStarted=false;

  for(int i=(int)strlen(testChar)-1;i>0;i--)
  {
    if(testChar[i]!=' '&&textHasStarted==false)
    {
      testChar[i+1]='\0';
      textHasStarted=true;
    }
  }

}
