#include <iostream>
using namespace std;

class Stack {
  public:
    Stack(int num) {
      top = 0;
      maxelem = num;
      s = new int[maxelem];
    }
    
  void push(int t) {
  	cout << "Push "<<t<<": \n";
    if (top == maxelem) 
		return;
    s[top++] = t;
  }
  
  int pop() {
  	cout << "Pop: \n";
    if (top == 0) 
		return -1;
    return s[--top];
  }
  
  void display() {
    if (top == 0) {
      cout << "(empty)\n";
      return;
    }
    for (int t = 0; t < top; t++) 
		cout << s[t] << " ";
    cout << "\n";
  }
  
  int empty() {
    return top == 0;
  }
  
  private:
    int * s;
  int top;
  int maxelem;
};

/*void menu(){
	cout << "What would you like to do?: \n";
	cout << "1: Push \n";
	cout << "2: Pop \n";
	cout << "3: Display \n";
	cout << "4: Exit \n";
	
}*/
int choice(){
	int choice;
	cout << "What would you like to do?: \n";
	cout << "1: Push \n";
	cout << "2: Pop \n";
	cout << "3: Display \n";
	cout << "4: Exit \n";
	cin >> choice;
	return choice;
}
int main() {

	
  Stack * s = new Stack(100);
  int menu1,num;
  menu:
  	menu1=choice();
  	if(menu1==1)
  	{
  		cout << "Number to push" << endl;
  		cin >> num;
  		s -> push(num);
			s -> display();
			system("pause>0");
			system("cls");
			goto menu;
		}
		else if(menu1==2)
		{
			s -> pop();
			s -> display();
			system("pause>0");
			system("cls");
			goto menu;
		}
		else if (menu1==3)
		{
			s -> display();
			system("pause>0");
			system("cls");
			goto menu;
		}
		else if (menu1==4)
			exit(1);
		else
		{
			cout<<"Invalid choice";
			system("pause>0");
			system("cls");
			goto menu;
		}
	}
