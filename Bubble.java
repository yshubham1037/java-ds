import java.util.Scanner;

class Bubble{
	public static void bubble_sort(int[] ar){
		int n=ar.length,temp=0;
		while(n>0){
			for(int i=0;i<n-1;i++){
				if(ar[i+1]<ar[i]){
					temp=ar[i+1];
					ar[i+1]=ar[i];
					ar[i]=temp;
				}
			}n--;
		}
			
		
		
	}
	public static void main(String args[]){
		Scanner sc=new Scanner(System.in);
		System.out.print("Enter the size of the array- ");
		int n=sc.nextInt();
		if(n>0){
			int[] ar=new int[n];
			System.out.print("Enter the elements of the array-\n->");
			for(int i=0;i<n;i++){
				ar[i]=sc.nextInt();
			}
			bubble_sort(ar);
			System.out.print("After sorting-\n->");
			for(int i=0;i<n;i++){
				System.out.print(ar[i]+" ");
			}
			System.out.println("");
		}
		
	}
}
