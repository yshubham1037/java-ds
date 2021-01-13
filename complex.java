import java.util.Scanner;

class complexx{
	float r1,r2,r3;
	float im1,im2,im3;

	complexx(){
		im3=r3=0;
	}

	void getinfo(){
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter the real part and imaginary part of first complex number: ");
        r1 = sc.nextFloat();
        im1 = sc.nextFloat();
        System.out.print("Enter the real part and imaginary part of second complex number: ");
        r2 = sc.nextFloat();
        im2 = sc.nextFloat();
	}

	void add(){
		r3=r1+r2;
		im3=im1+im2;
		System.out.println("adition is \t("+r3+"+)+("+im3+")i");
	}

	void sub(){
		r3=r1-r2;
		im3=im1-im2;
		System.out.println("subtraction is \t("+r3+") +("+im3+")i");
	}

	void mult(){
		r3= (r1*r2)-(im1*im2);
		im3=(r1*im2)-(r2*im1);
		System.out.println("multiplication is \t ("+r3+") +("+im3+")i");
	}
}

class complex{
	public static void main(String[]args){
		complexx cp = new complexx();
		cp.getinfo();
		cp.add();
		cp.sub();
		cp.mult();

	}
}