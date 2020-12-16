// stack -> Last in first out
#include<bits/stdc++.h>
using namespace std;
int top;// 3
int arr[10]; //= {1 2 3 4}

int pop(){
	if(top==-1){
		return 0;
	}else{
		int popVal = arr[top];//5
		top = top-1; 
		return popVal;
	}
}

int findTop(){
	if(top==-1){
		return 0;
	}else{
		return arr[top];
	}
}

void push(int ele){
	if(top==9){
		cout<<"You can't enter a anything Coz stack is full "<<endl;
	}else{
		top = top+1;
		arr[top] = ele;
		cout<<"Your value is pushed"<<endl;
	}
}



int main(){
	top = -1;
	bool flag = true;
	// top  , push , pop 
	int choice;
	while(flag) {
		cout<<"for finding Top element of the stack press 1"<<endl;
		cout<<"for doing push element in to the stack press 2"<<endl;
		cout<<"for doing pop oparation from  the stack press 3"<<endl;
		cout<<"Enter 6 for terminate the program "<<endl;
		cin>>choice;
		if(choice == 1){
			//top 
			int topElement = findTop();
			if(topElement == 0){
				cout<<"Sorry there is no value in stack!!"<<endl;
			}else{
				cout<<"Current top elemt is : "<<topElement<<endl;
			}	
		}else if(choice == 2){
			//push
			int element;
			cout<<"Enter a elemnt which you want to push "<<endl;
			cin>>element;//12
			push(element); //= push(12) 
		}else if(choice == 3){
			//pop
			int popElement = pop();
			if(popElement == 0){
				cout<<"Stack is underflow "<<endl;
			}else{
				cout<<"your Poped value is : "<<popElement<<endl;
			}	
		}else if(choice == 6){
			flag = false;
		}else{
			cout<<"You Entered wrong key"<<endl;
		}
		cout<<endl;
	}
	return 0;
}


