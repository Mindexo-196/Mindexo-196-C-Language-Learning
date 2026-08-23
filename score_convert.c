# include<stdio.h>
int main ()
{
	int score = 0 ;
	
	
	printf("请输入成绩:");
	scanf("%d" , &score);
	
	if (score > 100){
		printf("成绩超出范围(0-100),成绩无效\n");
	}
		else if (score < 0){
			printf("成绩小于0,成绩无效\n");
		}	
		else{
			switch 	(score/10) {
				case  10:
				case  9:
					printf("A\n");
					break;
		
				case 8:
					printf("B\n");
					break; 
		
				case 7:
		 	    	printf("C\n");
					break;
				
				case 6:
					printf("D\n");
					break;
			
				default:
					printf("E\n");
					break;
			}
		}
	
	return 0;
}
