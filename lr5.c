#include <stdio.h>                                                              //подключение библиотек содержащих функции ввода, вывода и математических  функций
#include <math.h>

int main(void){
  double s=0.0,scor=0.0,cor=0.0,fcor,f,s2=0.0;                                  //определение переменных и присваивание им необходимых значений
  short int n1=1000,n2=1050,n3=1100,i;
  printf("Yaskovich Dmitry (T01-01c). Lab 5. Variant 3\n\n");                   //Информация о программе
  for (i=1; i <= n3 ; i++) {                                                    //цикл, проходящий по всем i в пределах заданных в условии
	f=exp(sqrt(3*i/2));                                                         //суммирование по методу Кохена
	fcor=f-cor;
	scor=s+fcor;
	cor=(scor-s)-fcor;
	s=scor;
	s2=s2+f;                                                                    //обычное суммирование
	if ((i==n1) || (i==n2) || (i==n3)) {                                        //условие вывода результатов
	  printf("Number:       %d\n",i);                                           //вывод результатов
	  printf("No correction:%.30e\n",s2);
	  printf("Correction:   %.30e\n",s);
	  if ((s2-s)>0)
		printf("Comparison:   Sum with no correction is bigger than sum with correction\n");
	  if ((s2-s)<0) {
		printf("Comparison:   Sum with correction is bigger than sum with no correction\n");
	  }
	  if ((s2-s)==0) {
		printf("Comparison:   Sum with no correction is equal to sum with correction\n");
	  }
	  printf("Difference:   %.30e\n\n",fabs(s2-s));
	}
  }
  printf("Dimini Inc.\n");                                                      //Авторские права
  printf("For progressive future\n");
  printf("(c)2009-2012\n");
  fflush(stdin);                                                                //ожидание нажатия на клавишу для завершения программы
  getchar();
  return 0;
}
