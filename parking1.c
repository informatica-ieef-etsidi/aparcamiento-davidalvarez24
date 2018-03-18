#include<stdio.h>

void main() {

	char p1, p2;
	char o1, o2;


	printf("introduce a si quieres aparcar y r si quieres retirar el coche \n");
	scanf_s("%c", &o1);

	switch (o1) {

	case 'a': {
		printf("aparca enla plaza 1\n");
		p1 = 1;
		break;

	}

	case 'r':
	{
		printf("eso no se puede hacer");
			break;
	}


	}
	system("cls");


	printf("introduce a si quieres aparcar y r si quieres retirar el coche \n");
	scanf_s("%c", &o2);
	switch (o2) {

	case 'a':
		if (p1 = 1) {
			printf("aparca en la plaza 2\n");
			p2 = 1;
		}
		else if (p1 = 0) {
			printf("aparca en la plaza 1\n");
			p1 = 1;
		}
		break;

	case 'r':
		if (p1 == 1  &&  p2 == 0) {

			printf("retire el cohche");
			p1 = 0;
		}

		if (p1 == 0  &&  p2 == 1) {
			printf("retire el cohce de la plaza dos");
			p2 = 0;


			break;



		}





	}


	system("PAUSE");







}