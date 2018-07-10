import java.util.*;
class Palindrome {
 
    public static void main(String[] args) {
    	Scanner in = new Scanner(System.in);
    	int T = in.nextInt();
    	for (int i = 0; i < T; i++)
    	{
    		int N = in.nextInt();
    		int count = N/2;
    		count = count+1;
    		ArrayList<Integer> arr = new ArrayList<Integer>();
    		System.out.print(1 + " ");
    		for (int k=1; k <= count-1 ; k++)
    		{    
    			//System.out.println(arr);
    			 arr.add(0);
            }
    		//System.out.println(arr.toString().replace("[","").replace("]",""));
    		StringBuilder builder = new StringBuilder();
    		for (Integer value : arr) {
    		    builder.append(value);
    		}
    		String text = builder.toString();
    		System.out.println(1 + text);
    	}
    	in.close();
    }
}