//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//
//using namespace std;
//
// Ҫ���ɺͷ���������ĺ���
//int * getRandom(){
//	static int r[10];
//
//	 ��������
//	srand((unsigned)time(NULL));
//	for (int i = 0; i < 10; ++i){
//		r[i] = rand();
//		cout << r[i] << endl;
//	}
//
//	return r;
//}
//
//Ҫ�������涨�庯����������
//int main(){
//	һ��ָ��������ָ��
//	int *p;
//	p = getRandom();
//	for (int i = 0; i < 10; i++){
//		cout << "*(p +" << i << ") : ";
//		cout << *(p + i) << endl;
//	}
//
//	return 0;
//}