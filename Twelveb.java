import java.io.*;
import java.util.*;

class ll{
	LinkedList<String>name = new LinkedList<>();

	void add(){
		Scanner sc = new Scanner(System.in);
		System.out.println("enter the name");
		String a = sc.getLine();
		if(name.size()==0){
			name.add(a);
		}
		else
			name.addLast(a);

		
	}

	void display(){
		if(name.size()==0){
			System.out.println("empty list");
			return;
		}
		System.out.println("name f length less than 5");
		for(i=0;i<=name.size();i++){
			String m = name.get(i);
			if(name.length()<5)
				System.out.println(m);
		}

	}


class Twelveb{
	public static void main(String[]args){
		Scanner sc = new Scanner(System.in);
    	int ch;
    	ll l = new ll();
    	while (true) {
      System.out.println(
        "Enter:\n1 to add name\t2 to display names with length less than 5\t3 to Exit"
      );
      ch = sc.nextInt();
      switch (ch) {
        case 1:
          l.add();
          break;
        case 2:
          l.display();
          break;
        case 3:
          System.exit(0);
        default:
          System.out.println("INVALID CHOICE");
          break;
      }
    }
  

	}
}