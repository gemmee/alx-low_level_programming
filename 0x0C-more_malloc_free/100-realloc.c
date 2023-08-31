#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * similar implementation to realloc(run `man realloc` to learn more)
 * @ptr: pointer to the memory previously allocated with a call to
 * malloc: malloc(old_size)
 * @old_size: the size in bytes of the allocated space for ptr
 * @new_size: the new size, in bytes of the new memory block
 *
 * if new_size > old_size, the 'added' memory should not be initialized
 * if new_size == old_size, do not do anything and return ptr
 * if ptr is NULL, then the call is equivalent to malloc(new_size)
 * if new_size == 0 and ptr is not NULL, the call is equivalent to free(ptr)
 * and return NULL
 * the contents will be copied to newly allocated space
 * don't forget to free ptr when it makes sense
 * Return: pointer to newly allocated space on success
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int min_size, i;
	void *new_ptr;

	/* If new_size is equal to old_size, no need to reallocate */
	if (new_size == old_size)
		return (ptr);
	/* If new_size is zero, free memory and return NULL */
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	/* If ptr is NULL, allocate new memory block using malloc */
	if (ptr == NULL)
		return (malloc(new_size));
	/* Allocate memory for the new block */
	new_ptr  = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL); /* Allocation failed */

	/* Copy contents from old block to new block */
	min_size = (old_size < new_size) ? old_size : new_size;
	for (i = 0; i < min_size; i++)
		*((char *)new_ptr + i) = *((char *)ptr + i);

	/* Free the old block */
	free(ptr);

	return (new_ptr);
}
