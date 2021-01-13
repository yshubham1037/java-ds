import java.util.Scanner;
class mat{
	int m,n,p,q;
	int mat1[][],mat2[][],res[][];

	



void getinfo(){

		Scanner sc = new Scanner(System.in);
		System.out.println("enter the order of first matrix");
		m=sc.nextInt();
		n=sc.nextInt();
		System.out.println("enter the order of second matrix");
		p=sc.nextInt();
		q=sc.nextInt();
		

		mat1 = new int[m][n];
		mat2= new int[p][q];
		res = new int[m][q];
		

}

void fill(){
	int i,j;
	Scanner sc = new Scanner(System.in);
	System.out.println("enter the first matrix");
	for(i=0;i<m;i++){
		System.out.println("Enter "+n+" elements of row "+(i+1));
		for(j=0;j<n;j++){
			mat1[i][j]=sc.nextInt();
		}
	}

	System.out.println("enter the second matrix");
	for(i=0;i<p;i++){
		System.out.println("Enter "+q+" elements of row "+(i+1));
		for(j=0;j<q;j++){
			mat2[i][j]=sc.nextInt();
		}
	}
}

void mult(){
	int i,j,k;

	for(i=0;i<m;i++){
		for(j=0;j<q;j++){
			for(k=0;k<n;k++){
				res[i][j] += mat1[i][k]*mat2[k][j];
			}
		}
	}




}


void display(){
	int i,j;
	System.out.println("the first matrix is");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
		System.out.println(mat1[i][j]+" ");	
		}
	}

	System.out.println("second matrix is");
	for(i=0;i<p;i++){
		for(j=0;j<q;j++){
		System.out.println(mat2[i][j]+" ");
			
		}
	}

	System.out.println("the resultant matrix is:");
		for(i=0;i<m;i++){
			for(j=0;j<q;j++){
				System.out.print(res[i][j]+"\t");
				System.out.println("");
			}
		}

}
}

 class Five{
	public static void main(String[] args) {
		
		mat m = new mat();
		m.getinfo();
		m.fill();
		m.mult();
		m.display();
	}
}


























