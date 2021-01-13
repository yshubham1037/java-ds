import java.util.Scanner;

class fibrec{
	void rec(int count){
	int n1=0,n2=1,n3=0;
	if(count>0){
	n3=n1+n2;
	n1=n2;
	n2=n3;
	System.out.print(" "+n3);
	rec(count-1);
	}
	}
}

class Onea{
	public static void main(String args[]){
	Scanner sc= new Scanner(System.in); 
	int n1=0,n2=1,n3,i,count;
	System.out.println("enter the number of terms");
	count=sc.nextInt();
	System.out.print(n1+" "+n2);
	// without recursion 
	for(i=2;i<count;++i){
		n3=n1+n2;
		System.out.print(" "+n3);
		n1=n2;
		n2=n3;
		
	}

	System.out.println(" ");
	
	// with recursion
	System.out.print(0+" "+1);
	fibrec fb= new fibrec();
	fb.rec(count-2);

	}

}