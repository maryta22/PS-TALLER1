/*
	Descripcion: functions file that contains the functions for counting words
	Last Modify: 2020-06-15
	Modify by: @rafariva
*/

#include "functions.h"
#define MAX_WORDS 200

int count_words(FILE *file){
	int count = 0 , n;
	char word[MAX_WORDS];

	while(fscanf(file,"%s",word) == 1){
		count++;
	}
	/* TODO: add code for counting words */
	/* TIP: use function fscanf for read file/words */

	return count;
}
