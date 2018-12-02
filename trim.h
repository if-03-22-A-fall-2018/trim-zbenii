/*----------------------------------------------------------
 *				HTBLA-Leonding / Klasse: <your class>
 * ---------------------------------------------------------
 * Exercise Number: 0
 * Title:			trim.h
 * Author:			P. Bauer
 * Due Date:		March 14, 2015
 * ----------------------------------------------------------
 * Description:
 * Interface for trim
 * ----------------------------------------------------------
 */
#ifndef ___TRIM_H
#define ___TRIM_H

//wäre dieser wert zu klein könnte man des größten vorkommenden teststring nicht einsetzen
#define STRLEN 16

void trim(char* str,char* trimmed);
void remove_leading_blanks(char* source,char testChar[]);
void remove_trailing_blanks(char testChar[]);

#endif
