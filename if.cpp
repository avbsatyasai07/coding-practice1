/*if else
#include<stdio.h>
int main()
{
	int a;
	printf("entera value");
	scanf("%d",&a);
	if(a>0)
	{
		printf("\npositive number:%d",a);
		printf("\nsai");
	}
	else if(a==0)
	{printf("zero");
	}
	else
	{
	printf("\nnegitive number%d",a);
}
	
}*/
//switch
#include<stdio.h>
int main()
{
	char ch;
	printf("enter the choice1-7");
	scanf("%c",&ch);
	switch(ch)
{
		case '1':
	{printf("monday");
	break;
	}
	case '2':
	{printf("tuesday");
	break;
	}
	case '3':
	{printf("wednesday");
	break;
}
	case '4':
	{printf("tursday");
	break;
	}
	case '5':
	{printf("friday");
	break;
}
	case '6':
	{printf("satarday");
	break;
}
	case '7':
	{printf("sunday");
	break;
}
	defult:
	{
		printf("bye");
		break;
		
	}

}
}
