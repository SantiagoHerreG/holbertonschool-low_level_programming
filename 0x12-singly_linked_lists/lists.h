#ifndef __LISTS_H__
#define __LISTS_H__

/**
 * struct list_s - structure containing an string, a number of chars and a ptr
 * @str: string
 * @len: the length of the string in a unsigned int
 * @next: pointer to the structure data type
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

unsigned int print_list(const list_t *h);
unsigned int list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
void print_before(void) __attribute__ ((constructor));


#endif /* __LISTS_H__ */
