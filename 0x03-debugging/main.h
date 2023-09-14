#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

void positive_or_negative(int i) {
	if (i == 0) {printf("%d is zero", i)};
	if (i < 0) {printf("%d is negative", i)};
	if (i > 0) {printf("%d is positive", i)};
}

#endif /* MAIN_H */

