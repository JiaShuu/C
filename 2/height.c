#include <stdio.h>

int main()
{
	printf("��ֱ�������ߵ�Ӣ�ߺ�Ӣ��,"
	"������\"5 7\"������Ӣ����Ӣ�硣");
	
	double foot;
	double inch;
	
	scanf("%lf %lf", &foot, &inch);
	
	printf("�����%f��", ((foot + inch / 12) * 0.3048));
	
	return 0;
}
