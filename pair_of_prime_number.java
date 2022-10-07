
package pairs;
import java.util.Scanner;


public class Pairs {

	public static void main(String[] args) {
		
		int flag=-1;
		int j = 0;
		int array[] = new int[20];
		int k = 0;
		
		Scanner input = new Scanner(System.in);
		
		System.out.println("Enter the Range");
		int range = input.nextInt();
		
		int count = 0;
		
		for(int num = 1; num <= range; num++)
		{
		if(num == 1) 
		{
			flag = 0;
		}	
	    else 
	    {
		   if(num % 2 == 0)
		   {
			   if(num == 2)
			   {
				   flag = 1;
				   count = count+1;
			   }
			   else
			   {
				   flag = 0;
			   }
		   }
		   else
		   {
			   int m = (int) Math.ceil(Math.sqrt(num));
			   
			   for(int i = 2; i <= m; i++)
			   {
				   if(num % i == 0)
				   {
					   flag = 0;
					   break;
				   }
				   else
				   {
					   flag = 1;
					   //count = count +1;
				   }
			   }
			   if(flag == 1)
			   {
				   
				   count = count + 1;
			   }
		   }   
	    } 
		
		if(flag == 1)
		{
			array[j] = num;
			j++;
		}
		}
		
		//if(array[k+1] - array[k] == 1) {
			for( k = 0; k < count; k++)
			{
				if(array[k+1] - array[k] == 2 || array[k+1] - array[k] == 1)
				{
					System.out.print(array[k]+" ");
					System.out.print(array[k+1]);
					System.out.println();
				}
			
		}
		
			
		}
		
		
	    	
	}

