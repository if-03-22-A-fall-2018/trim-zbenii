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

void trim(char* str1,char* trimmed1)
{

  char testChar[STRLEN];
  bool textHasStarted=false;
  int count=0;

  for(int i=0;i<(int)strlen(str1);i++)
  {
    if(textHasStarted==true)
    {
      testChar[count]=str1[i];
      count++;
    }

    if(str1[i]!=' ' && textHasStarted==false)
    {
      testChar[0]=str1[i];
      textHasStarted=true;
      count++;
    }

  }
  testChar[count]='\0';

  textHasStarted=false;

  for(int i=(int)strlen(testChar)-1;i>0;i--)
  {
    if(testChar[i]!=' '&&textHasStarted==false)
    {
      testChar[i+1]='\0';
      textHasStarted=true;
    }
  }

  strcpy(trimmed1,testChar);

}
