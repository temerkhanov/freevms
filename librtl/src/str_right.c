/*
 * str_right.c
 *
 *	Code for VAX STR$RIGHT routine
 *
 * Description:
 *
 *
 * Bugs:
 *
 * History
 *
 *	Oct 15, 1996 - Kevin Handy
 *		Preliminary design.
 *
 *	Jan 02, 1997 - Kevin Handy
 *		Fix starting position by one.
 *
 *	Feb 7, 1997 - Christof Zeile
 *		Change 'short' to 'unsigned short' in several places.
 */

#include <stdio.h>
#include <assert.h>
#include "descrip.h"
#include "strdef.h"
#include "str$routines.h"

/*************************************************************
 * str$right
 *
 */
unsigned long str$right(struct dsc$descriptor_s* destination_string,
	const struct dsc$descriptor_s* source_string,
	const long* start_position)
{
	char* s2_ptr;				/* Pointer to second string */
	unsigned short s2_length;		/* Length of second string */
	int final_length;			/* Signed final length */
	unsigned short real_final_length;	/* Usable final length */
	unsigned long result;			/* Result */
	unsigned long second_result = STR$_NORMAL; /* Another possible result */
	int start_offset = *start_position - 1;	/* Real start character */

	/*
	 * Validate input
	 */
	if (start_offset <= 0)
	{
		start_offset = 1;
		second_result = STR$_STRTOOLON;
	}

	/*
	 * Determine how much we can use
	 */
        str$analyze_sdesc(source_string, &s2_length, &s2_ptr);
	final_length = s2_length - start_offset;

	if (final_length < 0)
	{
		real_final_length = 0;
		second_result = STR$_STRTOOLON;
	}
	else
	{
		real_final_length = (unsigned short) final_length;
	}

	/*
	 * Move over the left part of the string
	 */
	s2_ptr += start_offset;
	result = str$copy_r(destination_string,
		&real_final_length, s2_ptr);

	/*
	 * Done
	 */
	if (result == STR$_NORMAL)
	{
		return second_result;
	}
	else
	{
		return result;
	}
}

