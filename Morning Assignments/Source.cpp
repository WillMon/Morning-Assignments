//#include <iostream>
//
//int Callback(char* c) {
//	int an = sizeof(c) + 1;
//	return  an;
//}
//void Invoke(int a,char* c ) {
//	int count = 0;
//	while (c[count] != NULL)
//		count++;
//	if (count == a)
//		std::cout << "Its Correct" << std::endl;
//	else
//		std::cout << "Its Incorrect" << a<< count<< std::endl;
//}
//void main() {
//	char c[] = "hell0o";
//	int (*call)(char*);
//	call = Callback;
//
//	Invoke(call(c),c);
//	system("pause");
//} 