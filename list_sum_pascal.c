#include <stdio.h>
#include <stdlib.h>

struct item {
	int data;
	struct item *next;
};

int int_list_sum(const struct item *lst)
{
	int sum = 0;
	const struct item *tmp = lst;
	while(tmp) {
		sum += tmp->data;
		tmp = tmp->next;
	}
	return sum;
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
	while(begin) {
		struct item *tmp;
		tmp = begin->next;
		free(begin);
		begin = tmp;
	}
	result = printf("%d\n", sum);
	if(result > 0)
		return 0;
	else
		return 1;
}
