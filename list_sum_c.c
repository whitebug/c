#include <stdio.h>
#include <stdlib.h>

struct item {
	int data;
	struct item *next;
};

int int_list_sum(const struct item *lst)
{
	return lst ? lst->data + int_list_sum(lst->next) : 0;
}

void delete_int_list(struct item *lst)
{
	if(lst) {
		delete_int_list(lst->next);
		free(lst);
	}
}

struct item *fill_item_list(int *values, int size)
{
	struct item *tmp;
	if(!size)
		return NULL;
	tmp = malloc(sizeof(struct item));
	tmp->data = *values;
	tmp->next = fill_item_list(values+1, size-1);
	return tmp;
}

int main()
{
	int sum, result;
	int initial_values[] = { 1, 2, 3, 4, 5, 6, 7 };
	struct item *list;
	struct item *begin;
	list = fill_item_list(initial_values, 
			sizeof(initial_values)/sizeof(*initial_values));
	begin = list;
	sum = int_list_sum(list);
	delete_int_list(begin);
	result = printf("%d\n", sum);
	if(result > 0)
		return 0;
	else
		return 1;
}
