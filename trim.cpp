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
bool textStart=false;
int count=0;

  for(int i=0;i<(int)strlen(str1);i++)
  {
    if(textStart==true)
    {
      testChar[count]=str1[i];
      count++;
      if(i<(int)strlen(str1))
      {
          testChar[count]='\0';
      }
    }

    if(str1[i]!=' '&&textStart==false)
    {
      testChar[0]=str1[i];
      textStart=true;
      count++;
    }

  }

  textStart=false;

  for(int i=(int)strlen(testChar)-1;i>0;i--)
  {
    if(testChar[i]!=' '&&textStart==false)
    {
      testChar[i+1]='\0';
      textStart=true;
    }
  }

  strcpy(trimmed1,testChar);

}
