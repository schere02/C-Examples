#include <stdio.h>

//벡터 연산을 수행하는 프로그램
struct vector {
	float x;
	float y;
};

struct vector get_vector_sum(struct vector a, struct vector b) {
	struct vector result = { a.x + b.x, a.y + b.y };
	return result;
}

int main(void) {
	struct vector a = { 2.0, 3.0 };
	struct vector b = { 5.0, 6.0 };
	struct vector sum;

	sum = get_vector_sum(a, b);
	printf("벡터의 합은 (%.2f, %.2f) 입니다.\n", sum.x, sum.y);

	return 0;
}