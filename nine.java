import java.util.Scanner;
abstract class vehicle{
	int mf;
	abstract int getdata();
	abstract void putdata(int a);

	vehicle(){
		mf = 0;
	}

	vehicle(int a){
		mf = a;

	}
}

class twowheeler extends vehicle{
	twowheeler(){
		super();
	}
	twowheeler(int a){
		super(a);
	}

	int getdata(){
		return mf;
	}

	void putdata(int a){
		mf=a;
	}
}

class fourwheeler extends vehicle{
	fourwheeler(){
		super();
	}
	fourwheeler(int a){
		super(a);
	}
	int getdata(){
		return mf ;
	}
	void putdata(int a){
		mf=a;
	}
}

class mytwowheeler extends twowheeler{
	mytwowheeler(){
		super();
	}

	mytwowheeler(int a){
		super(a);
	}

	void putdata(int a){
		super.putdata(a);
	}
}

class Nine{
	public static void main(String[]args){


	Scanner sc = new Scanner(System.in);

	
	System.out.println("enter the year of manufacture");
	int a = sc.nextInt();
	mytwowheeler mtw = new mytwowheeler(a);
	
	System.out.println("year of mf is"+mtw.getdata());


	System.out.println("enter the year of mf");
	 int b= sc.nextInt();
	fourwheeler fw = new fourwheeler(b);
	System.out.println("year of mf is"+fw.getdata());

















}



}







