#include <stdio.h>
void main() {
	int sel; int c1 = 0; int c2 = 0; int c3 = 0; int my_money = 100000;
	int jja = 6000; int bbong = 7000; int tang = 12000;

	while (sel != 4) {
		printf(" ** »´ƒ·π›¡° ** "); printf("\n");
		printf(" 1. ¬•¿Â∏È	6000ø¯ "); printf("\n");
		printf(" 2. ¬´ªÕ		7000ø¯ "); printf("\n");
		printf(" 3. ≈¡ºˆ¿∞  12000ø¯ "); printf("\n");
		printf(" 4. ¡æ∑· "); printf("\n");
		printf(" ≥ª µ∑ : %d, ¬•¿Â∏È : %d∞≥, ¬´ªÕ : %d∞≥, ≈¡ºˆ¿∞ : %d∞≥", my_money, c1, c2, c3); printf("\n");
		printf(" ************** "); printf("\n");
		printf("π¯»£∏¶ ¿‘∑¬«œººø‰ >>> ");
		scanf_s("%d", &sel);

		if (sel == 1) {
			if (my_money >= jja) {
				my_money -= jja;
				c1 += 1;
			} else {
				printf("µ∑¿Ã ∫Œ¡∑«’¥œ¥Ÿ."); printf("\n");
			}
		} else if (sel == 2) {
			if (my_money >= bbong) {
				my_money -= bbong;
				c2 += 1;
			} else {
				printf("µ∑¿Ã ∫Œ¡∑«’¥œ¥Ÿ."); printf("\n");
			}
		} else if (sel == 3) {
			if (my_money >= tang) {
				my_money -= tang;
				c3 += 1;
			} else {
				printf("µ∑¿Ã ∫Œ¡∑«’¥œ¥Ÿ."); printf("\n");
			}
	}

}