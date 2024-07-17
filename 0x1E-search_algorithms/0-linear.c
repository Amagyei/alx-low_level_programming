#include "search_algos.h"

int linear_search(int *array, size_t size, int value) {
	size_t i = 0;
	while (array[i] != value) {
        	i++;
		if (i == size) {
			return -1;
		}
    	}
	return array[i];
}
