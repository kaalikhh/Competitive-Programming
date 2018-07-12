import java.util.Scanner;
 
 
class MagicSet 
{
	public static void main(String[] args) 
    {
    	Scanner sc=new Scanner(System.in); 
    	//accepting the number of test cases
     	int T=sc.nextInt();
    	for(int k=0;k<T;k++)
    	{
    		int count=0;
    		int n = sc.nextInt();
    		int m = sc.nextInt();
 
    	    int arr[] = new int[n];
    	    for (int i=0; i < n ; i++)
    		{
    	    arr[i]=sc.nextInt();
    		}

    		for (int i = 0; i < n; i++)
    		if( arr[i]%m == 0)
    		count += 1;
    	    int opsize = (int)Math.pow(2, count);
    	    opsize = opsize - 1;
            /* Run from counter 000..1 to 111..1*/
            System.out.println(opsize);
           // System.out.print(sum);
    	}
   sc.close();
    }
 
} 