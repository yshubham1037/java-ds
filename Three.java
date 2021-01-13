import java.util.Scanner;


class stack{
	int size,top,ele;
	int s[];

	stack(){
		 top=-1;
		 size=100;
		 s = new int[size];

	}

	void push(){
		
		Scanner sc = new Scanner(System.in);
		System.out.print("enter the value");
		ele=sc.nextInt();
		if(top==size-1){
			System.out.println("stack overflow");
		}
		else

			
			top++;
			s[top]=ele;


	}

	void pop(){
		
		if(top==-1){
			System.out.println("stack underflow");
		}
		else
			
			ele=s[top];
			System.out.println("deleted element is" +ele);
			top--;


	}


	void display(){
		int i;
		for(i=top;i>=0;i--){
			System.out.print(s[i]+"");
			System.out.println("");
		}
	}

}


class Three{
	public static void main(String[] args){
		int ch;
		Scanner sc= new Scanner(System.in);
		stack st = new stack();
		while(true){
		System.out.print("enter your choice: 1.push \t 2.pop \t 3.display 4. exit");
		ch=sc.nextInt();
		switch(ch){
			case 1: 
					
					st.push();
					break;
			case 2: 
					st.pop();
					break;
			case 3:
					st.display();
					break;
			case 4:
					System.exit(0);
			default:
					break;

		}
		}

	}
}





















