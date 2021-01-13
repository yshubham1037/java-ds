import java.util.scanner



class Fiborec
{
	int n1,n2,n3;
	void recursion (int n)
	{
		n3=n1+n2;
		n1=n2;
		n2=n3;
		recursion(n-1);
	}

	
}

class PractiseOnea
{
	public static void main(String[] args)
	{	
		Scanner sc= new Scanner(ststem.in)
		system.out.println("enter the value of n");
		int n = sc.nextInt();
		recursion(n);

	}
}