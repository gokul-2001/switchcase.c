#include<stdio.h>
main()
{
	printf("\n1.Pizza,Rs 239 \n2.Burger,Rs 129 \n3.Pasta,Rs 179 \n4.French Fries Rs 99 \n5.Sandwich, Rs 149");
	int choice=0;
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("\n Food item:Pizza");
			printf("\n Price:Rs 239");
			break;
	    case 2:
	    	printf("\n Food item:Burger");
	    	printf("\n Price:Rs 129");
	    	break;
	    case 3:
	    	printf("\n Food item:Pasta");
	    	printf("\n Price:Rs 179");
	    	break;
	    case 4:
	    	printf("\n Food item:French Fries");
	    	printf("\n Price:Rs 99");
	    	break;
	    case 5:
	    	printf("\n Food item:Sandwich");
	    	printf("\n Price:Rs 149");
	    	break;
	    default:
	    	printf("invalid");
	     	
	}
}
