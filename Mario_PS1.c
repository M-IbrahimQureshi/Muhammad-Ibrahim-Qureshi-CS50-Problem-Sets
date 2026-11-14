#include <stdio.h>
#include <stdbool.h>

int main()
{
    int Height;
    int Row, Col1, Col2, Space;
    while(!false)
    {
        printf("Enter Hieght of Pyramid: \n");
        scanf("%d", &Height);
        if(Height >= 1 && Height <=8)
            break;
        else
            continue;
    }   
    for(Row=0; Row<Height; Row++){
    	for(Space=0; Space< Height-Row; Space++)
    		printf(" 	");
    	
        for(Col1=0; Col1<=Row; Col1++){
            printf("#");	
        }
        
        printf("  ");
        
    for(Col2=0;Col2<= Row; Col2++){
    	printf("#");
	}
	
	printf("\n");    
}
	
    return 0;
}
